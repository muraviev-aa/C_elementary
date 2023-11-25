#include <stdio.h>

int main()
{
    int massiv[3] = {4, 12};

    printf("massiv[0] = %d, address is %p\n", massiv[0], &massiv[0]);
    printf("massiv[1] = %d, address is %p\n", massiv[1], &massiv[1]);
    printf("massiv[2] = %d, address is %p\n\n", massiv[2], &massiv[2]);

    // array massiv contains address
    printf("var massiv = %p\n", massiv); // the & sign is not needed!!!
    return 0;
}
