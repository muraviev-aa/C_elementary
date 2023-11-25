#include <stdio.h>

#define SIZE 5

int global[SIZE];

int main()
{
    for(unsigned i = 0; i < SIZE; i++)
    printf("global[%u] = %d\n", i, global[i]);

    return 0;
}
