#include <stdio.h>

#define SIZE 5

int main()
{
    int local[SIZE] = {1, 2, 3, 4, 5};

    for(unsigned i = 0; i < SIZE; i++)
        printf("local[%u] = %d\n", i, local[i]);

    return 0;
}
