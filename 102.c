#include <stdio.h>

#define SIZE 5

int main()
{
    int local[SIZE] = {0};

    for(unsigned i = 0;i <SIZE; i++)
        printf("local[%u] = %d\n", i, local[i]);

    return 0;
}
