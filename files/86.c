#include <stdio.h>

int main()
{
    //unsigned int massiv[4]; // the array contains some garbage
    //unsigned int massiv[4] = {0};
    unsigned int massiv[4] = {1, 2, 3, 4};

    printf("massiv[0] = %u\n", massiv[0]);
    printf("massiv[1] = %u\n", massiv[1]);
    printf("massiv[2] = %u\n", massiv[2]);
    printf("massiv[3] = %u\n\n", massiv[3]);

    massiv[2] = 1000;
    massiv[3] = 123;

    printf("massiv[0] = %u\n", massiv[0]);
    printf("massiv[1] = %u\n", massiv[1]);
    printf("massiv[2] = %u\n", massiv[2]);
    printf("massiv[3] = %u\n", massiv[3]);

    return 0;
}
