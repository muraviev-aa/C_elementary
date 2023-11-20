#include <stdio.h>

int main()
{
    int array[4] = {-7, 2, 5, 9};
    unsigned number = 0;

    while(number < 4)
    {
        printf("array[%u] is %d, address is %u\n", number, array[number], &array[number]);
        number++;
    }

    return 0;
}
