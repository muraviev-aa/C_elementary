#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    double x = 0.2;
    double y = 0.21;

    double eps = 0.01; // точность сравнения

    bool res = fabs(x-y) <= eps;

    if (res)
        puts("x == y");
    else
        puts("x != y");

    return 0;
}
