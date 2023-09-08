#include <stdio.h>
#include <limits.h>

int main()
{
    /* short (short int) 2^16 = 65536
    -32768      32767
    unsigned short (int) 0  65535
    */
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %u\n", SHRT_MAX);
    printf("USHRT_MAX = %u\n\n", USHRT_MAX);

    /* long (long int) 2^32 = 4 294 967 296
    -2147483648     2147483647
    unsignet long int 0     4 294 967 295
    */
    printf("LONG_MIN = %d\n", LONG_MIN);
    printf("LONG_MAX = %u\n", LONG_MAX);
    printf("ULONG_MAX = %u\n\n", ULONG_MAX);
    return 0;
}
