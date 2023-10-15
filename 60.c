#include <stdio.h>

int main()
{
    unsigned a, b, result;
    unsigned mod = 0;// the variable stores the remainder of the division
    a = 7;
    b = 2;
    result = a / b;
    mod = a % b;// remainder of integer division
    printf("a = %u, b = %u, a / b = %u, mod = %u\n", a, b, result, mod);

    return 0;
}
