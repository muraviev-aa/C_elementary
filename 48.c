#include <stdio.h>
#include <windows.h>

int main()
{
    unsigned in_CP = 0; // the encoding number to enter
    unsigned out_CP = 0; // encoding number for output

    printf("Hello, World!\n");
    printf("Привет, Мир!\n\n");

    // get the encoding number to enter
    in_CP = GetConsoleCP();
    out_CP = GetConsoleOutputCP();

    printf("Input CP is %u\n", in_CP);
    printf("Output CP is %u\n\n", out_CP);

    // installing a new encoding
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    in_CP = GetConsoleCP();
    out_CP = GetConsoleOutputCP();

    printf("Привет, Мир!\n\n");

    printf("Input CP is %u\n", in_CP);
    printf("Output CP is %u\n\n", out_CP);

    return 0;
}
