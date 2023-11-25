#include <stdio.h>

int main()
{
    int a = 7;
    int b = 3;
    double result = 0;

    //var 1
    result = (double)a / b;
    printf("Result is %f\n", result);

    //var2 option with a new variable
    double A = 0;
    A = (double)a;
    result = A / b;
    printf("Result is %f, A is %f\n", result, A);

    //var3 !!! do not use !!!
    //printf("Result is %f\n", a / b); !!! dangerous !!!

    return 0;
}
