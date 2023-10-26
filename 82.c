#include <stdio.h>

int main()
{
    // 26.10.2023

    double rub = 0;
    double usd = 0;
    double usdToRub = 0;

    puts("Enter dollar amount");
    scanf(" %lf", &usd);

    if (usd < 1000)
        usdToRub = 93.8;
    else
        usdToRub = 94.0;

    rub = usdToRub * usd;

    printf("After selling dollars you will receive %.2f rubles\n", rub);

    return 0;
}
