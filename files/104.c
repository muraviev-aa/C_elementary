#include <stdio.h>

#define SIZE 5

int main()
{
    int local[SIZE] = {10, 23, [3] = 100, [4] = 222};

    for(unsigned i = 0; i < SIZE; i++)
        printf("local[%u] = %d\n", i, local[i]);
    // 0  1  2  3   4
    // 21 23 0  100 222

    return 0;
}
