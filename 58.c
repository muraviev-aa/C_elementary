#include <stdio.h>
#include <windows.h>

int main()
{
    // Win32 API
    // low-level functions
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    puts("Привет, Мир!\n");

    // calling an external interpreter (terminal)
    // high-level functions
    system("chcp 1251>nul");
    puts("Привет, Мир!");

    return 0;
}
