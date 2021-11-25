#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <tchar.h>

void setWallpaper(short unsigned int * path) {
    int result;
    result = SystemParametersInfoW(SPI_SETDESKWALLPAPER, 0, (void *)path, SPIF_UPDATEINIFILE);

    return;
}

void showMessageBox(char* title, char* message) {
    MessageBox(FindWindowA("ConsoleWindowClass", NULL), message, title, MB_OK);
}

// Void thats hide the console screen
void hideConsole() {
    HWND window;
    AllocConsole();
    window = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(window, 0);

    return;
}

