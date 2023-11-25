#include <stdio.h>

int main()
{
    double sber1, sber2, alfa, yad, qiwi;
    long double summa = 0;
    sber1 = 112345.12;
    sber2 = 23452.11;
    alfa = 12000000;
    yad = 100;
    qiwi = 333.01;

    summa = sber1 + sber2 + alfa + yad + qiwi;
    printf("summa is %.2Lf\n", summa);
    return 0;
}
