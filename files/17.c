#include <stdio.h>

int main()
{
    unsigned int rubl, dollar, euro;
    rubl = 200000;
    dollar = 2500;
    euro = 5200;

    unsigned long long int summa = 0;

    unsigned r_d = 97;
    unsigned r_e = 104;

    summa = r_d * dollar + r_e * euro + rubl;
    printf("Summa = %llu rubl", summa);

    return 0;
}
