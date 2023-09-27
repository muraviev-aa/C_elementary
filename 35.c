#include <stdio.h>

int main(void)
{
    // accuracy 6-7 characters
    float flNumber1 = 0.111222333444;
    float flNumber2 = 123456789.123; // the decimal places will be lost
    printf("Float is %zd bytes\n", sizeof(float));
    printf("Float is %zd bits\n", sizeof(flNumber1) * 8);
    printf("Float flNumber1 is %.12f\n", flNumber1);
    printf("Float flNumber2 is %f\n\n", flNumber2);

    // accuracy 17 characters
    double dNumber = 0.123456789123456789;
    printf("Double is %zd bytes\n", sizeof(double));
    printf("Double is %zd bits\n", sizeof(dNumber) * 8);
    printf("Double dNumber is %.23f\n\n", dNumber);

    // accuracy 20 characters
    long double ldNumber = 0.123456789123456789123456789;
    printf("Long double is %zd bytes\n", sizeof(long double));
    printf("Long double is %zd bits\n", sizeof(ldNumber) * 8);
    printf("Long double ldNumber is %.23Lf\n", ldNumber);

    return (0);
}
