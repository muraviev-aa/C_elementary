#include <stdio.h>

int main()
{
    long long int num = 800;
    printf("Num is %d, size is %u\n", num, sizeof(num)); // wrong
    printf("Num is %lld, size is %u\n", num, sizeof(num)); // correctly
    return 0;
}
