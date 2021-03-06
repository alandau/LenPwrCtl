#include <Windows.h>
#include <CommCtrl.h>
#include <assert.h>
#include "resource.h"
#include "powermanager.h"
#include "dialog.h"
#include "version.h"
#include "thresholdsdialog.h"
#include "usbdialog.h"
#include "booldialog.h"

#define PROGRAM_NAME L"LenPwrCtl"

typedef struct InstanceData
{
	PowerInfo* powerInfo;
	HWND generalListView;
	HWND batteryListView;
	HWND thresholdsButton;
} InstanceData;

static void InitGeneralListView(HWND hListView)
{
	ListView_SetExtendedListViewStyleEx(hListView,
		LVS_EX_FULLROWSELECT | LVS_EX_LABELTIP, LVS_EX_FULLROWSELECT | LVS_EX_LABELTIP);

	LVCOLUMN lvc;

	lvc.mask = LVCF_TEXT | LVCF_WIDTH;
	lvc.cx = ListView_GetStringWidth(hListView, L"Property");
	lvc.pszText = L"Property";
	ListView_InsertColumn(hListView, 0, &lvc);

	lvc.mask = LVCF_TEXT | LVCF_WIDTH;
	lvc.cx = ListView_GetStringWidth(hListView, L"Value");
	lvc.pszText = L"Value";
	ListView_InsertColumn(hListView, 1, &lvc);
}

static void InitBatteryListView(HWND hListView, size_t numBatteries)
{
	ListView_SetExtendedListViewStyleEx(hListView,
		LVS_EX_FULLROWSELECT | LVS_EX_LABELTIP, LVS_EX_FULLROWSELECT | LVS_EX_LABELTIP);

	LVCOLUMN lvc;

	lvc.mask = LVCF_TEXT | LVCF_WIDTH;
	lvc.cx = ListView_GetStringWidth(hListView, L"Property");
	lvc.pszText = L"Property";
	ListView_InsertColumn(hListView, 0, &lvc);

	for (size_t i = 1; i <= numBatteries; i++) {
		wchar_t buf[20];
		lvc.mask = LVCF_TEXT | LVCF_WIDTH;
		lvc.cx = ListView_GetStringWidth(hListView, L"Battery 99");
		wsprintf(buf, L"Battery %d", i);
		lvc.pszText = buf;
		ListView_InsertColumn(hListView, i, &lvc);
	}
}

static int AddListViewEmptyItem(HWND hListView, const wchar_t* title)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	return item.iItem;
}

static int AddGeneralListViewBoolItem(HWND hListView, const wchar_t* title,
	bool capable, bool value)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		item.iSubItem = 1;
		if (capable) {
			item.pszText = value ? L"Enabled" : L"Disabled";
		} else {
			item.pszText = L"N/A";
		}
		ListView_SetItem(hListView, &item);
	}
	return item.iItem;
}

static int AddGeneralListViewUsbItem(HWND hListView, const wchar_t* title,
	bool capable, AlwaysOnUsbEnum value)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		item.iSubItem = 1;
		if (capable) {
			item.pszText = value == AlwaysOnUsbOff? L"Disabled" : value == AlwaysOnUsbWhenSleeping ? L"When Sleeping" : L"When Sleeping & Off";
		} else {
			item.pszText = L"N/A";
		}
		ListView_SetItem(hListView, &item);
	}
	return item.iItem;
}

static void UpdateGeneralListView(HWND hListView, PowerInfo* p)
{
	ListView_DeleteAllItems(hListView);

	int i;

	i = AddGeneralListViewUsbItem(hListView, L"Always-on USB", p->AlwaysOnUsbCapable, p->AlwaysOnUsb);
	assert(i == 0);

	AddListViewEmptyItem(hListView, L"");
	i = AddGeneralListViewBoolItem(hListView, L"Airplane Power Mode", p->AirplanePowerModeCapable, p->AirplanePowerMode);
	assert(i == 2);
	i = AddGeneralListViewBoolItem(hListView, L"Airplane Power Mode Autodetection", p->AirplanePowerModeAutoDetectionCapable, p->AirplanePowerModeAutoDetection);
	assert(i == 3);

	AddListViewEmptyItem(hListView, L"");
	i = AddGeneralListViewBoolItem(hListView, L"Cooling Mode", p->CoolModeCapable, p->CoolMode);
	assert(i == 5);
	i = AddGeneralListViewBoolItem(hListView, L"Intelligent Cooling", p->IntelligentCoolingCapable, p->IntelligentCooling);
	assert(i == 6);
	i = AddGeneralListViewBoolItem(hListView, L"Intelligent Cooling Auto Mode", p->IntelligentCoolingAutoModeCapable, p->IntelligentCoolingAutoMode);
	assert(i == 7);

	ListView_SetColumnWidth(hListView, 0, LVSCW_AUTOSIZE_USEHEADER);
	ListView_SetColumnWidth(hListView, 1, LVSCW_AUTOSIZE_USEHEADER);
}

typedef enum {
	IntItemNormal,
	IntItemDiv1000,
	IntItemHourMins,
	IntItemChargeStatus,
	IntItemChemistry,
} IntItemFlags;

static int AddBatteryListViewIntItem(HWND hListView, PowerInfo* p, const wchar_t* title, const wchar_t* valueFormat,
	size_t offsetCapable, size_t offsetValue, IntItemFlags flags)
{
	LVITEM item;
	wchar_t buf[50];

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		for (size_t i = 0; i < p->numBatteries; i++) {
			BatteryInfo* b = &p->battaries[i];
			bool capable = offsetCapable == SIZE_MAX ? true : *(bool*)((uint8_t*)b + offsetCapable);
			item.iSubItem = (int)i + 1;
			if (capable) {
				int32_t value = *(int32_t*)((uint8_t*)b + offsetValue);
				switch (flags) {
				case IntItemNormal:
					wsprintf(buf, valueFormat, value);
					break;
				case IntItemDiv1000:
					wsprintf(buf, valueFormat, value >= 0 ? "" : "-", abs(value) / 1000, abs(value) % 1000);
					break;
				case IntItemHourMins:
					wsprintf(buf, valueFormat, value / 60, value % 60);
					break;
				case IntItemChargeStatus:
					wsprintf(buf, valueFormat, value == 0 ? L"Idle" : value == 1 ? L"Charging" : value == 2 ? L"Discharging" : L"Unknown", value);
					break;
				case IntItemChemistry:
					wsprintf(buf, valueFormat, value == 0 ? L"NiCd" : value == 1 ? L"NiMH" : value == 2 ? L"Li-Ion" : value == 3 ? L"Li-Polymer" : value == 4 ? L"Silver-Zinc" : L"Unknown", value);
					break;
				}
				item.pszText = buf;
			} else {
				item.pszText = L"N/A";
			}
			ListView_SetItem(hListView, &item);
		}
	}
	return item.iItem;
}

static int AddBatteryListViewBoolItem(HWND hListView, PowerInfo* p, const wchar_t* title,
	size_t offsetCapable, size_t offsetValue)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		for (size_t i = 0; i < p->numBatteries; i++) {
			BatteryInfo* b = &p->battaries[i];
			bool capable = offsetCapable == SIZE_MAX ? true : *(bool*)((uint8_t*)b + offsetCapable);
			bool* value = (bool*)((uint8_t*)b + offsetValue);
			item.iSubItem = (int)i + 1;
			if (capable) {
				item.pszText = *value ? L"Yes" : L"No";
			}
			else {
				item.pszText = L"N/A";
			}
			ListView_SetItem(hListView, &item);
		}
	}
	return item.iItem;
}

static int AddBatteryListViewStrItem(HWND hListView, PowerInfo* p, const wchar_t* title,
	size_t offsetValue)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = (wchar_t*)title;
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		for (size_t i = 0; i < p->numBatteries; i++) {
			BatteryInfo* b = &p->battaries[i];
			wchar_t* value = *(wchar_t**)((uint8_t*)b + offsetValue);
			item.iSubItem = (int)i + 1;
			item.pszText = value ? value : L"N/A";
			ListView_SetItem(hListView, &item);
		}
	}
	return item.iItem;
}

static int AddBatteryListViewChargeThresholds(HWND hListView, PowerInfo* p)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = L"Charge Thresholds";
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		for (size_t i = 0; i < p->numBatteries; i++) {
			BatteryInfo* b = &p->battaries[i];
			item.iSubItem = (int)i + 1;
			if (b->ChargeThresholdCapable) {
				if (b->ChargeThresholdEnabled) {
					wchar_t buf[50];
					wsprintf(buf, L"Start at %d%%, stop at %d%%", b->ChargeThresholdStart_pct, b->ChargeThresholdStop_pct);
					item.pszText = buf;
				} else {
					item.pszText = L"Disabled";
				}
			} else {
				item.pszText = L"N/A";
			}
			ListView_SetItem(hListView, &item);
		}
	}
	return item.iItem;
}

static void UpdateBatteryListView(HWND hListView, PowerInfo* p)
{
	ListView_DeleteAllItems(hListView);

#define INT_FIELD(title, format, field, flags) AddBatteryListViewIntItem(hListView, p, title, format, \
			offsetof(BatteryInfo, field##Capable), offsetof(BatteryInfo, field), flags)
#define BOOL_FIELD(title, field) AddBatteryListViewBoolItem(hListView, p, title, \
			offsetof(BatteryInfo, field##Capable), offsetof(BatteryInfo, field))
#define STR_FIELD(title, field) AddBatteryListViewStrItem(hListView, p, title, offsetof(BatteryInfo, field))

	AddListViewEmptyItem(hListView, L"Charging Information");
	INT_FIELD(L"    Current", L"%s%d.%03d A", Current_mA, IntItemDiv1000);
	INT_FIELD(L"    Wattage", L"%s%d.%03d W", Wattage_mW, IntItemDiv1000);
	INT_FIELD(L"    Remaining Capacity", L"%s%d.%03d Wh", RemainingCapacity_mWh, IntItemDiv1000);
	AddBatteryListViewBoolItem(hListView, p, L"    On AC Power", SIZE_MAX, offsetof(BatteryInfo, IsOnAcAdapter));
	INT_FIELD(L"    AC Adapter Wattage", L"%d W", AcAdapterWattage_W, IntItemNormal);
	INT_FIELD(L"    Charge Status", L"%s (%d)", ChargeStatus, IntItemChargeStatus);
	INT_FIELD(L"    Remaining Time", L"%d h %d min", RemainingTime_min, IntItemHourMins);
	INT_FIELD(L"    Remaining Percentage", L"%d%%", RemainingPercentage_pct, IntItemNormal);
	INT_FIELD(L"    Charge Completion Time", L"%d h %d min", ChargeCompletionTime_min, IntItemHourMins);
	INT_FIELD(L"    Temperature", L"%d C", Temperature_C, IntItemNormal);

	AddListViewEmptyItem(hListView, L"");
	AddListViewEmptyItem(hListView, L"Health Status");
	INT_FIELD(L"    Design Capacity", L"%s%d.%03d Wh", DesignCapacity_mWh, IntItemDiv1000);
	INT_FIELD(L"    Full Charge Capacity", L"%s%d.%03d Wh", FullChargeCapacity_mWh, IntItemDiv1000);
	INT_FIELD(L"    Design Voltage", L"%s%d.%03d V", DesignVoltage_mV, IntItemDiv1000);
	INT_FIELD(L"    Voltage", L"%s%d.%03d V", Voltage_mV, IntItemDiv1000);
	INT_FIELD(L"    Cycle Count", L"%d", CycleCount, IntItemNormal);
	STR_FIELD(L"    Last Condition Date", LastConditionDate);

	AddListViewEmptyItem(hListView, L"");
	AddListViewEmptyItem(hListView, L"Manufacture Information");
	STR_FIELD(L"    Device Name", DeviceName);
	STR_FIELD(L"    Barcode Number", BarcodeNumber);
	STR_FIELD(L"    Manufacturer", Manufacturer);
	STR_FIELD(L"    Manufacture Date", ManufactureDate);
	INT_FIELD(L"    Serial Number", L"%d", SerialNumber, IntItemNormal);
	INT_FIELD(L"    Chemistry", L"%s (%d)", Chemistry, IntItemChemistry);
	STR_FIELD(L"    First Use Date", FirstUseDate);
	STR_FIELD(L"    Firmware Version", FirmwareVersion);

	AddListViewEmptyItem(hListView, L"");
	AddBatteryListViewChargeThresholds(hListView, p);

#undef INT_FIELD
#undef BOOL_FIELD
#undef STR_FIELD

	ListView_SetColumnWidth(hListView, 0, LVSCW_AUTOSIZE_USEHEADER);
	for (size_t i = 0; i < p->numBatteries; i++) {
		ListView_SetColumnWidth(hListView, i + 1, LVSCW_AUTOSIZE_USEHEADER);
	}
}

static void UpdateTitle(HWND hWnd)
{
	enum { MAX_LEN = 100 };
	wchar_t title[MAX_LEN];
	GetWindowText(hWnd, title, MAX_LEN);
	wcscat_s(title, MAX_LEN, L" v");
	wcscat_s(title, MAX_LEN, VER_STRING);
	SetWindowText(hWnd, title);
}

static void UpdateThresholdsButtonEnabled(HWND hButton, PowerInfo* p)
{
	BOOL enableThresholdsButton = FALSE;
	for (size_t i = 0; i < p->numBatteries; i++) {
		if (p->battaries[i].ChargeThresholdCapable) {
			enableThresholdsButton = TRUE;
		}
	}
	EnableWindow(hButton, enableThresholdsButton);
}

static void RefreshView(HWND hDlg, InstanceData* p)
{
	UpdatePowerInfo(p->powerInfo);
	if (p->powerInfo->errorStr) {
		MessageBox(hDlg, p->powerInfo->errorStr, PROGRAM_NAME, MB_OK | MB_ICONERROR);
		EndDialog(hDlg, 0);
		return;
	}
	UpdateGeneralListView(p->generalListView, p->powerInfo);
	UpdateBatteryListView(p->batteryListView, p->powerInfo);
	UpdateThresholdsButtonEnabled(p->thresholdsButton, p->powerInfo);
	EnableWindow(GetDlgItem(hDlg, IDC_MODIFY_BUTTON), FALSE);
}

static INT_PTR CALLBACK MainDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	InstanceData* p;
	if (msg == WM_INITDIALOG) {
		p = calloc(1, sizeof(*p));
		SetWindowLongPtr(hDlg, DWLP_USER, (LONG_PTR)p);
	} else {
		p = (InstanceData*)GetWindowLongPtr(hDlg, DWLP_USER);
	}

	switch (msg) {
	case WM_INITDIALOG: {
		CenterDialogInParent(hDlg);
		HICON hIcon = LoadImage(GetModuleHandle(NULL), MAKEINTRESOURCE(IDI_MAIN_ICON), IMAGE_ICON, 0, 0, LR_DEFAULTSIZE);
		SendMessage(hDlg, WM_SETICON, ICON_BIG, (LPARAM)hIcon);
		SendMessage(hDlg, WM_SETICON, ICON_SMALL, (LPARAM)hIcon);
		p->generalListView = GetDlgItem(hDlg, IDC_GENERAL_LIST);
		p->batteryListView = GetDlgItem(hDlg, IDC_BATTERY_LIST);
		p->thresholdsButton = GetDlgItem(hDlg, IDC_THRESHOLDS_BUTTON);
		p->powerInfo = GetPowerInfo();
		if (!p->powerInfo) {
			MessageBox(hDlg, L"Couldn't allocate memory, exiting.", PROGRAM_NAME, MB_OK | MB_ICONERROR);
			EndDialog(hDlg, 0);
			return TRUE;
		}
		if (p->powerInfo->errorStr) {
			MessageBox(hDlg, p->powerInfo->errorStr, PROGRAM_NAME, MB_OK | MB_ICONERROR);
			EndDialog(hDlg, 0);
			return TRUE;
		}
		UpdateTitle(hDlg);
		InitGeneralListView(p->generalListView);
		InitBatteryListView(p->batteryListView, p->powerInfo->numBatteries);
		UpdateGeneralListView(p->generalListView, p->powerInfo);
		UpdateBatteryListView(p->batteryListView, p->powerInfo);
		UpdateThresholdsButtonEnabled(p->thresholdsButton, p->powerInfo);
		EnableWindow(GetDlgItem(hDlg, IDC_MODIFY_BUTTON), FALSE);
		return TRUE;
	}
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		return TRUE;
	case WM_DESTROY:
		FreePowerInfo(p->powerInfo);
		free(p);
		return TRUE;
	case WM_DPICHANGED: {
		RECT* r = (RECT*)lParam;
		SetWindowPos(hDlg, NULL, r->left, r->top, r->right - r->left, r->bottom - r->top, SWP_NOZORDER | SWP_NOACTIVATE);
		ListView_SetColumnWidth(p->generalListView, 0, LVSCW_AUTOSIZE_USEHEADER);
		ListView_SetColumnWidth(p->generalListView, 1, LVSCW_AUTOSIZE_USEHEADER);
		ListView_SetColumnWidth(p->batteryListView, 0, LVSCW_AUTOSIZE_USEHEADER);
		for (size_t i = 0; i < p->powerInfo->numBatteries; i++) {
			ListView_SetColumnWidth(p->batteryListView, i + 1, LVSCW_AUTOSIZE_USEHEADER);
		}
		return TRUE;
	}
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_REFRESH_BUTTON:
			RefreshView(hDlg, p);
			break;
		case IDC_THRESHOLDS_BUTTON:
			if (DialogBoxParamWithDefaultFont(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_THRESHOLDS_DIALOG), hDlg, ThresholdsDlgProc, (LPARAM)p->powerInfo)) {
				RefreshView(hDlg, p);
			}
			break;
		case IDC_MODIFY_BUTTON: {
			int item = ListView_GetNextItem(GetDlgItem(hDlg, IDC_GENERAL_LIST), -1, LVNI_SELECTED);
			switch (item) {
			case 0: { // Always-on USB
				INT_PTR res = DialogBoxParamWithDefaultFont(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_USB_DIALOG), hDlg, UsbDlgProc, (LPARAM)p->powerInfo->AlwaysOnUsb);
				if (res == -1) {
					// Cancelled
					break;
				}
				PowerInfoSetAlwaysOnUsb(p->powerInfo, (AlwaysOnUsbEnum)res);
				RefreshView(hDlg, p);
				break;
			}
			case 2: case 3: case 5: case 6: case 7: {
				static struct TableItem {
					int itemIndex;
					const wchar_t* title;
					size_t offset;
					void (*setter)(PowerInfo*, bool value);
				} table[] = {
					{2, L"Airplane Power Mode", offsetof(PowerInfo, AirplanePowerMode), PowerInfoSetAirplanePowerMode},
					{3, L"Airplane Power Mode Autodetection", offsetof(PowerInfo, AirplanePowerModeAutoDetection), PowerInfoSetAirplanePowerModeAutoDetection},
					{5, L"Cooling Mode", offsetof(PowerInfo, CoolMode), PowerInfoSetCoolMode},
					{6, L"Intelligent Cooling", offsetof(PowerInfo, IntelligentCooling), PowerInfoSetIntelligentCooling},
					{7, L"Intelligent Cooling Auto Mode", offsetof(PowerInfo, IntelligentCoolingAutoMode), PowerInfoSetIntelligentCoolingAutoMode},
				};
				struct TableItem* t = NULL;
				for (size_t i = 0; i < ARRAYSIZE(table); i++) {
					if (table[i].itemIndex == item) {
						t = &table[i];
						break;
					}
				}
				if (!t) {
					// Not found, shouldn't happen
					break;
				}
				INT_PTR res = BoolDialogBoxWithDefaultFont(hDlg, t->title, *(bool*)((uint8_t*)p->powerInfo + t->offset));
				if (res == -1) {
					// Cancelled
					break;
				}
				t->setter(p->powerInfo, (bool)res);
				RefreshView(hDlg, p);
				break;
			}
			}
			break;
		}
		}
		return TRUE;
	case WM_NOTIFY:
		if (wParam == IDC_GENERAL_LIST && ((NMHDR*)lParam)->code == LVN_ITEMCHANGED) {
			NMLISTVIEW* nm = (NMLISTVIEW*)lParam;
			if (nm->uChanged & LVIF_STATE) {
				if (nm->uNewState & LVIS_SELECTED) {
					BOOL enabled = (nm->iItem == 0 && p->powerInfo->AlwaysOnUsbCapable) ||
						(nm->iItem == 2 && p->powerInfo->AirplanePowerModeCapable) ||
						(nm->iItem == 3 && p->powerInfo->AirplanePowerModeAutoDetectionCapable) ||
						(nm->iItem == 5 && p->powerInfo->CoolModeCapable) ||
						(nm->iItem == 6 && p->powerInfo->IntelligentCoolingCapable) ||
						(nm->iItem == 7 && p->powerInfo->IntelligentCoolingAutoModeCapable);
						EnableWindow(GetDlgItem(hDlg, IDC_MODIFY_BUTTON), enabled);
				} else {
					EnableWindow(GetDlgItem(hDlg, IDC_MODIFY_BUTTON), FALSE);
				}
			}
			return TRUE;
		} else if (wParam == IDC_GENERAL_LIST && ((NMHDR*)lParam)->code == NM_DBLCLK) {
			if (IsWindowEnabled(GetDlgItem(hDlg, IDC_MODIFY_BUTTON))) {
				SendMessage(hDlg, WM_COMMAND, IDC_MODIFY_BUTTON, 0);
			}
			return TRUE;
		}
		break;
	}
	return FALSE;
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
	InitCommonControls();
	DialogBoxWithDefaultFont(hInstance, MAKEINTRESOURCE(IDD_MAIN_DIALOG), NULL, MainDlgProc);
	return 0;
}
