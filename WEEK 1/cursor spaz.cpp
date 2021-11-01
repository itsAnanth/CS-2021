#include <bits/stdc++.h>
#include <windows.h>

int main() {
    RECT desktop;
    const HWND desktop_handler = GetDesktopWindow();
    GetWindowRect(desktop_handler, &desktop);
    long horizontal = desktop.right;
    long vertical = desktop.bottom;

    srand(time(0));
    for (int i = 0; i < 20; i++) {
        int x = rand() % horizontal + 1;
        int y = rand() % vertical + 1;
        SetCursorPos(x, y);
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    return 0;
}