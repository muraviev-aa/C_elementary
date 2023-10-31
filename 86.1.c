#include <stdio.h>

void printMassiv(unsigned int a, unsigned int b, unsigned int c, unsigned int d);

int main()
{
    // part 1
    unsigned int massiv[4] = {1, 2, 3, 4};

    printMassiv(massiv[0], massiv[1], massiv[2], massiv[3]);

    // part 2
    massiv[2] = 1000;
    massiv[3] = 123;

    printMassiv(massiv[0], massiv[1], massiv[2], massiv[3]);

    return 0;
}

void printMassiv(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    printf("massiv[0] = %u\n", a);
    printf("massiv[1] = %u\n", b);
    printf("massiv[2] = %u\n", c);
    printf("massiv[3] = %u\n\n", d);
}
