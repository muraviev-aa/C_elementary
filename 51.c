#include <stdio.h>

int main()
{
    int iNumber = 3; // 32 bits
    double dReal = 3.0; // 64 bits

    printf("iNumber is %d\n", iNumber);
    printf("dReal is %.1f\n", dReal);
    printf("iNumber is %f\n", iNumber); // implicit conversion (int --> double)
    printf("dReal is %lld\n", dReal);   // incorrect result
    printf("dReal is %d\n", (int)dReal); // explicit casting

    unsigned uNum;
    double dNum = 4.5;
    uNum = dNum;
    printf("uNum is %u\n", uNum);

    unsigned y, z;
    double x;
    y = 7;
    z = 2;
    x = (double)y / z;
    printf("x is %.1f", x); // explicit casting

    return 0;
}
