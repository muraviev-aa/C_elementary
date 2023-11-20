#include <stdio.h>

int main()
{
    int array[5] = {-2, 3, 4};

    printf("Variable \"number\" is %u\n", array);
    printf("Address of array[0] is %u\n\n", &array[0]);

    printf("array[3] is %d\n", array[3]);
    printf("array[4] is %d\n", array[4]);

    return 0;
}
