#include <Windows.h>

int main() {
    while (true) {
        // Move the mouse by a small amount
        mouse_event(MOUSEEVENTF_MOVE, 1, 1, 0, 0);
        Sleep(6000); // Wait for 60 seconds
    }

    return 0;
}


