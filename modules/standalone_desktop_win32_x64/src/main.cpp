#include <windows.h>
#include <desktop.cpp>

int APIENTRY WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    return start(__argc, __argv);
}
