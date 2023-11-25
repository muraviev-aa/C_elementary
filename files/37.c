#include <stdio.h>

int main()
{
    float number = .12345;
    double count = 2.0;
    long double value = 99.0;

    printf("number is %.5f, count is %.1f, value is %.1Lf\n", number, count, value);
    return 0;
}
