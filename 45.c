#include <stdio.h>

int main()
{
    int ch = 40;

    putchar(88); putchar(89); putchar(90); putchar(10);
    putchar('X'); putchar('Y'); putchar('Z'); putchar('\n');
    putchar(ch); ch = 100; putchar(ch); ch = 102; putchar(ch); ch = 41; putchar(ch); putchar('\12');

    return 0;
}
