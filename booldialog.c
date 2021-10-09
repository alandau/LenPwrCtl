#include "booldialog.h"
#include "dialog.h"
#include "resource.h"

typedef struct
{
	const wchar_t* title;
	BOOL initialValue;
} Params;

static INT_PTR CALLBACK BoolDlgProc(HWND hDlg, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg) {
	case WM_INITDIALOG: {
		Params* params = (Params*)lParam;
		SetWindowText(hDlg, params->title);
		CheckDlgButton(hDlg, IDC_ENABLED_CHECK, params->initialValue);
		return TRUE;
	}
	case WM_COMMAND:
		switch (LOWORD(wParam)) {
		case IDOK: {
			BOOL value = IsDlgButtonChecked(hDlg, IDC_ENABLED_CHECK);
			EndDialog(hDlg, value);
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

INT_PTR BoolDialogBoxWithDefaultFont(HWND hOwner, const wchar_t* sTitle, BOOL bInitialState)
{
	Params params = {
		.title = sTitle,
		.initialValue = bInitialState,
	};
	return DialogBoxParamWithDefaultFont(GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_BOOL_DIALOG), hOwner, BoolDlgProc, (LPARAM)&params);
}
