#include <stdio.h>

int main()
{
    int iNumber = 888;
    printf("iNumber is %d\n", iNumber);

    // single precision variable
    float fNumber = 333.333333; // 32 bits - 4 bytes
    printf("float number is %f\n", fNumber);

    // double precision variable
    double dNumber = 333.333333; // 64 bits - 8 bytes
    printf("double number is %.6f\n", dNumber);

    return 0;
}
