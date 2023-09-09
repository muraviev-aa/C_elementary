#include <stdio.h>

#define CONSTANT1 99999ULL // unsigned long long int
#define CONSTANT2 99999UL  // usigned long int
#define CONSTANT3 99999L   // long int


int main()
{
    printf("%llu, %lu, %ld", CONSTANT1, CONSTANT2, CONSTANT3);
    return 0;
}
