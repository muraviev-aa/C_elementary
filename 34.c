#include <stdio.h>

int main()
{
    long double ldNumber = 333.222333444555L; // 80 bit
    printf("long double number is %.12Lf\n", ldNumber);
    return 0;
}
