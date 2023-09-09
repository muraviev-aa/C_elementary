#include <stdio.h>

#define RUBL 200000
#define DOLLAR 2500
#define EURO 5200

int main()
{
    unsigned long long int summa = 0;

    unsigned r_d = 97;
    unsigned r_e = 104;

    summa = r_d * DOLLAR + r_e * EURO + RUBL;
    printf("Summa = %llu rubl", summa);

    return 0;
}
