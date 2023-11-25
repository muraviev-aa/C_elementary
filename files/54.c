#include <stdio.h>

int main()
{
    float fNum;
    double dNum;
    long double ldNum;

    printf("Enter three numbers (float, double and long double): ");
    scanf("%f %lf %Lf", &fNum, &dNum, &ldNum);
    printf("%f %f %lf", fNum, dNum, ldNum);

    return 0;
}
