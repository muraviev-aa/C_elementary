#include <stdio.h>

//#define SIZE

int main()
{
    int local[] = {100, [3] = 22, [9] = 100, 101};

    for(unsigned i = 0; i < sizeof(local)/sizeof(int); i++)
        printf("local[%u] = %d\n", i, local[i]);
    // 0   1 2 3  ... 9   10
    // 100 0 0 22  0  100 101

    return 0;
}
