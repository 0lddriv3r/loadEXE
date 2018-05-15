
#include <windows.h>
#include "iostream"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	std::cin.get();
	MessageBoxA(0, "Hello World", "Hello World", 0);

	return 0;
}