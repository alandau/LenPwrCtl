#include "dialog.h"

INT_PTR DialogBoxWithDefaultFont(HINSTANCE hInstance, LPCWSTR hDialogTemplate, HWND hWndParent, DLGPROC lpDialogFunc)
{
	LOGFONT lf;
	BOOL res = SystemParametersInfo(SPI_GETICONTITLELOGFONT, sizeof(LOGFONT), &lf, 0);
	if (!res) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}
	int fontSizePt = lf.lfHeight >= 0 ?
		lf.lfHeight :
		MulDiv(-lf.lfHeight, 72, GetDeviceCaps(GetDC(NULL), LOGPIXELSY));

	HRSRC hRsrc = FindResource(hInstance, hDialogTemplate, RT_DIALOG);
	if (!hRsrc) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	DWORD size = SizeofResource(hInstance, hRsrc);
	if (!size) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	HGLOBAL hGlobal = LoadResource(hInstance, hRsrc);
	if (!hGlobal) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	BYTE* data = LockResource(hGlobal);
	if (!data) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	// We only support DIALOGEX templates
	if (!(size >= 4 && data[0] == 1 && data[1] == 0 && data[2] == 0xff && data[3] == 0xff)) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	// Skip initial static fields
	int offset = 26;
	// Skip 3 string fields
	offset += (lstrlen((wchar_t*)(data + offset)) + 1) * 2;
	offset += (lstrlen((wchar_t*)(data + offset)) + 1) * 2;
	offset += (lstrlen((wchar_t*)(data + offset)) + 1) * 2;

	// Now offset points to:
	// WORD wPointSize;
	// WORD wWeight;
	// BYTE bItalic;
	// BYTE bCharSet;
	// WCHAR szFontName[]; // variable-length
	
	int existingFontNameBytes = (lstrlen((wchar_t*)(data + offset + 6)) + 1) * 2;
	int newFontNameBytes = (lstrlen(lf.lfFaceName) + 1) * 2;

	BYTE* newTemplate = malloc(size - existingFontNameBytes + newFontNameBytes);
	if (!newTemplate) {
		return DialogBox(hInstance, hDialogTemplate, hWndParent, lpDialogFunc);
	}

	// Copy initial bytes
	memcpy(newTemplate, data, offset);
	
	// Copy new font details
	newTemplate[offset] = fontSizePt & 0xff;
	newTemplate[offset + 1] = (fontSizePt >> 8) & 0xff;
	newTemplate[offset + 2] = lf.lfWeight & 0xff;
	newTemplate[offset + 3] = (lf.lfWeight >> 8) & 0xff;
	newTemplate[offset + 4] = lf.lfItalic;
	newTemplate[offset + 5] = lf.lfCharSet;
	memcpy(newTemplate + offset + 6, lf.lfFaceName, newFontNameBytes);

	// Copy remaining template bytes
	memcpy(newTemplate + offset + 6 + newFontNameBytes, data + offset + 6 + existingFontNameBytes, size - (offset + 6 + existingFontNameBytes));

	INT_PTR result = DialogBoxIndirect(hInstance, (DLGTEMPLATE*)newTemplate, hWndParent, lpDialogFunc);
	free(newTemplate);
	return result;
}
