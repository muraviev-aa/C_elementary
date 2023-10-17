#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int ch1, ch2, ch3;
    ch1 = 'w'; // character constant
    ch2 = 119; // in the decimal system
    ch3 = '\167'; // in the octal system

    putchar(ch1);
    putchar(ch2);
    putchar(ch3);
    putchar('\n');

    printf("%c %d %#o\n", ch1, ch2, ch3); // character/decimal system/octal system
    printf("%#x\n", ch1); // in the hexadecimal system

    return 0;
}
