#include <Windows.h>
#include <CommCtrl.h>
#include "resource.h"
#include "powermanager.h"
#include "dialog.h"

#define PROGRAM_NAME L"LenPwrCtl"

typedef struct InstanceData
{
	PowerInfo* powerInfo;
	HWND generalListView;
	HWND batteryListView;
} InstanceData;

static void InitGeneralListView(HWND hListView)
{
	ListView_SetExtendedListViewStyleEx(hListView,
		LVS_EX_FULLROWSELECT, LVS_EX_FULLROWSELECT);

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
		LVS_EX_FULLROWSELECT, LVS_EX_FULLROWSELECT);

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

static void UpdateGeneralListView(HWND hListView, PowerInfo* p)
{
	LVITEM item;

	item.mask = LVIF_TEXT;
	item.iItem = INT_MAX;
	item.iSubItem = 0;
	item.pszText = L"Always-on USB";
	item.iItem = ListView_InsertItem(hListView, &item);
	if (item.iItem >= 0) {
		item.iSubItem = 1;
		item.pszText = p->AlwaysOnUsbCapable ? (p->AlwaysOnUsb ? L"Enabled" : L"Disabled") : L"N/A";
		ListView_SetItem(hListView, &item);
	}
	ListView_SetColumnWidth(hListView, 0, LVSCW_AUTOSIZE_USEHEADER);
	ListView_SetColumnWidth(hListView, 1, LVSCW_AUTOSIZE_USEHEADER);
}

static int AddBatteryListViewIntItem(HWND hListView, PowerInfo* p, const wchar_t* title, const wchar_t* valueFormat,
	size_t offsetCapable, size_t offsetValue)
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
			int32_t* value = (int32_t*)((uint8_t*)b + offsetValue);
			item.iSubItem = (int)i + 1;
			if (capable) {
				wsprintf(buf, valueFormat, *value);
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

static void UpdateBatteryListView(HWND hListView, PowerInfo* p)
{
#define INT_FIELD(title, format, field) AddBatteryListViewIntItem(hListView, p, title, format, \
			offsetof(BatteryInfo, field##Capable), offsetof(BatteryInfo, field))
#define BOOL_FIELD(title, field) AddBatteryListViewBoolItem(hListView, p, title, \
			offsetof(BatteryInfo, field##Capable), offsetof(BatteryInfo, field))

	INT_FIELD(L"Design Capacity", L"%d mWh", DesignCapacity_mWh);
	INT_FIELD(L"Full Charge Capacity", L"%d mWh", FullChargeCapacity_mWh);
	INT_FIELD(L"Remaining Capacity", L"%d mWh", RemainingCapacity_mWh);

	AddBatteryListViewBoolItem(hListView, p, L"On AC Power", SIZE_MAX, offsetof(BatteryInfo, IsOnAcAdapter));
	INT_FIELD(L"AC Adapter Wattage", L"%d W", AcAdapterWattage_W);

	INT_FIELD(L"Voltage", L"%d mV", Voltage_mV);
	INT_FIELD(L"Current", L"%d mA", Current_mA);
#undef INT_FIELD
#undef BOOL_FIELD

	ListView_SetColumnWidth(hListView, 0, LVSCW_AUTOSIZE_USEHEADER);
	for (size_t i = 0; i < p->numBatteries; i++) {
		ListView_SetColumnWidth(hListView, i + 1, LVSCW_AUTOSIZE_USEHEADER);
	}
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
	case WM_INITDIALOG:
		p->generalListView = GetDlgItem(hDlg, IDC_GENERAL_LIST);
		p->batteryListView = GetDlgItem(hDlg, IDC_BATTERY_LIST);
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
		InitGeneralListView(p->generalListView);
		InitBatteryListView(p->batteryListView, p->powerInfo->numBatteries);
		UpdateGeneralListView(p->generalListView, p->powerInfo);
		UpdateBatteryListView(p->batteryListView, p->powerInfo);
		return TRUE;
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		return TRUE;
	case WM_DESTROY:
		FreePowerInfo(p->powerInfo);
		free(p);
		return TRUE;
	}
	return FALSE;
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
	InitCommonControls();
	DialogBoxWithDefaultFont(hInstance, MAKEINTRESOURCE(IDD_MAIN_DIALOG), NULL, MainDlgProc);
	return 0;
}
