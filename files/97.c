#include <stdio.h>

int main()
{
    int num1, num2, a, b;
    a = 0; b = 0;
    num1 = 0; num2 = 0;

    num1 = a++;
    printf("num1 = %d\n", num1);
    printf("a = %d\n\n", a);

    num2 = ++b;
    printf("num2 = %d\n", num2);

    return 0;
}
