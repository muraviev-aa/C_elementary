#include <stdio.h>

int main()
{
    int x, y, z;
    x = 0;
    y = 10;
    z = 3;

    x = y/z;
    printf("x = %d\n\n", x);

    double a = 0;
    a = y/z;
    printf("a = %f\n", a);
    a = (double)y/z;
    printf("a = %f\n\n", a);

    printf("z = %f\n", (double)z);
    return 0;
}
