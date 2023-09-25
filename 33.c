#include <stdio.h>

int main()
{
    unsigned int rubl = 20158;
    unsigned int dollar = 1021;
    unsigned int euro = 563;

    double r_d = 95.9;
    double r_e = 102.1;
    double summa = 0;
    summa = rubl + dollar * r_d + euro * r_e;
    printf("Summa is %f", summa);

    return 0;
}
