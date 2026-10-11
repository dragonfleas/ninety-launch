#include <windows.h>

// NOLINTNEXTLINE(bugprone-easily-swappable-parameters,readability-non-const-parameter)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    (void)hInstance;
    (void)hPrevInstance;
    (void)lpCmdLine;
    (void)nCmdShow;
    MessageBoxA(NULL, "Hello, World!", "My First Windows Application", MB_OK);
    return 0;
}
