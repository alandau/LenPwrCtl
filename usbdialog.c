#include "usbdialog.h"
#include "resource.h"

INT_PTR CALLBACK UsbDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg) {
	case WM_INITDIALOG:
		SendMessage(GetDlgItem(hDlg, IDC_VALUES_COMBO), CB_ADDSTRING, 0, (LPARAM)L"Disabled");
		SendMessage(GetDlgItem(hDlg, IDC_VALUES_COMBO), CB_ADDSTRING, 0, (LPARAM)L"When Sleeping");
		SendMessage(GetDlgItem(hDlg, IDC_VALUES_COMBO), CB_ADDSTRING, 0, (LPARAM)L"When Sleeping & Off");
		SendMessage(GetDlgItem(hDlg, IDC_VALUES_COMBO), CB_SETCURSEL, lParam, 0);
		return TRUE;
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDOK: {
			int selected = (int)SendMessage(GetDlgItem(hDlg, IDC_VALUES_COMBO), CB_GETCURSEL, 0, 0);
			if (selected == CB_ERR) {
				return TRUE;
			}
			EndDialog(hDlg, selected);
			break;
		}
		case IDCANCEL:
			EndDialog(hDlg, -1);
			break;
		}
		return TRUE;
	case WM_CLOSE:
		EndDialog(hDlg, -1);
		return TRUE;
	case WM_DPICHANGED: {
		RECT* r = (RECT*)lParam;
		SetWindowPos(hDlg, NULL, r->left, r->top, r->right - r->left, r->bottom - r->top, SWP_NOZORDER | SWP_NOACTIVATE);
		return TRUE;
	}
	}
	return FALSE;
}
