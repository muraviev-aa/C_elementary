#include <stdio.h>

#define TOTAL_ELEMENTS (sizeof(array) / sizeof(array[0]))

int array[] = {23, 24, 12, 17, 204, 99, 16};

int main()
{
    for(unsigned d = 0; d <= (TOTAL_ELEMENTS - 2); d++)
        printf("%d\n", array[d + 1]);

    return 0;
}
