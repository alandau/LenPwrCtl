#include "thresholdsdialog.h"
#include "powermanager.h"
#include "dialog.h"
#include "resource.h"

static void EnableStartStopEdits(HWND hDlg, BOOL bEnable)
{
	EnableWindow(GetDlgItem(hDlg, IDC_START_EDIT), bEnable);
	EnableWindow(GetDlgItem(hDlg, IDC_STOP_EDIT), bEnable);
}

INT_PTR CALLBACK ThresholdsDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	PowerInfo* p;
	if (msg == WM_INITDIALOG) {
		p = (PowerInfo*)lParam;
		SetWindowLongPtr(hDlg, DWLP_USER, (LONG_PTR)p);
	} else {
		p = (PowerInfo*)GetWindowLongPtr(hDlg, DWLP_USER);
	}

	switch (msg) {
	case WM_INITDIALOG:
		CenterDialogInParent(hDlg);
		// Read and display battery 0's thresholds
		CheckDlgButton(hDlg, IDC_ENABLED_CHECK, p->battaries[0].ChargeThresholdEnabled);
		SetDlgItemInt(hDlg, IDC_START_EDIT, p->battaries[0].ChargeThresholdStart_pct, FALSE);
		SetDlgItemInt(hDlg, IDC_STOP_EDIT, p->battaries[0].ChargeThresholdStop_pct, FALSE);
		EnableStartStopEdits(hDlg, p->battaries[0].ChargeThresholdEnabled);
		return TRUE;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDC_ENABLED_CHECK:
			EnableStartStopEdits(hDlg, IsDlgButtonChecked(hDlg, IDC_ENABLED_CHECK));
			break;
		case IDOK: {
			BOOL enabled = IsDlgButtonChecked(hDlg, IDC_ENABLED_CHECK);
			int start = 0, stop = 0;
			if (enabled) {
				BOOL ok;
				start = GetDlgItemInt(hDlg, IDC_START_EDIT, &ok, FALSE);
				if (!ok || start < 1 || start > 100) {
					MessageBox(hDlg, L"Start threshold must be between 1% and 100%.", L"Charge Thresholds", MB_ICONERROR | MB_OK);
					break;
				}
				stop = GetDlgItemInt(hDlg, IDC_STOP_EDIT, &ok, FALSE);
				if (!ok || stop < 1 || stop > 100) {
					MessageBox(hDlg, L"Stop threshold must be between 1% and 100%.", L"Charge Thresholds", MB_ICONERROR | MB_OK);
					break;
				}
				if (start > stop) {
					MessageBox(hDlg, L"Stop threshold must be greater than start threshold.", L"Charge Thresholds", MB_ICONERROR | MB_OK);
					break;
				}
			}
			// Update thresholds for all batteries supporting it
			for (size_t i = 0; i < p->numBatteries; i++) {
				if (p->battaries[i].ChargeThresholdCapable) {
					PowerInfoSetChargeThresholds(p, i, enabled, start, stop);
				}
			}
			EndDialog(hDlg, 1);
			break;
		}
		case IDCANCEL:
			EndDialog(hDlg, 0);
			break;
		}
		return TRUE;
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		return TRUE;
	case WM_DPICHANGED: {
		RECT* r = (RECT*)lParam;
		SetWindowPos(hDlg, NULL, r->left, r->top, r->right - r->left, r->bottom - r->top, SWP_NOZORDER | SWP_NOACTIVATE);
		return TRUE;
	}
	}
	return FALSE;
}
