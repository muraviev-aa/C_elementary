#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void myPutChar(int a, int b, int c)
{
    putchar(a); putchar(b); putchar(c); putchar('\n');
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int ch1, ch2, ch3;

    myPutChar(ch1, ch2, ch3);

    ch1 = ch2 = ch3 = '0';

    myPutChar(ch1, ch2, ch3);

    return 0;
}
