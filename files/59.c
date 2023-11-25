#include <stdio.h>

int main()
{
    int a = 7;
    int b = 3;
    double x = 7.0;
    double y = 3.0;
    int iResult = 0;
    double dResult = 0.0;

    iResult = a / b;
    printf("%d\n", iResult);

    dResult = (double)a / b;
    printf("%.3f\n", dResult);

    dResult = x /y;
    printf("%.3f\n", dResult);

    return 0;
}
