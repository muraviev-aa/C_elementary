#include <stdio.h>

int main()
{
    int array[9] = {84, 32, -3, -5, 55};

    printf("Size of array is %zu\n", sizeof(array));
    printf("Size array[0] is %zu\n", sizeof(array[0]));

    return 0;
}
