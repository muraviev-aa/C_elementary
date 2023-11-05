#include <stdio.h>

// unsigned long int
// 9.21 s
// 1.462 s with register
// 0.04 s Optimize fully[O3]

int main()
{
    register unsigned long int num = 0;
    register unsigned long int i;

    for(i = 0; i < 4294967295; i++)
    {
        num++;
    }

    printf("num = %lu\n", num);

    return 0;
}
