#include <stdio.h>
#include <windows.h>

int main()
{
    double rubl;
    double dollar;
    double euro;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Введите два числа типа double (dollar and euro):\n");
    scanf("%lf %lf", &dollar, &euro);
    rubl = 101.20 * dollar + 107.60 * euro;
    printf("У вас всего %.2f рублей", rubl);

    return 0;
}
