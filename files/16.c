#include <stdio.h>
#include <limits.h>

int main()
{
    /* long long int 2^64 = 18 446 744 073 709 551 616
    LLONG_MIN = -9 223 372 036 854 775 808
    LLONG_MAX =  9 223 372 036 854 775 807
    UULONG_MAX = 18 446 744 073 709 551 615 (2^64 -1)
    */
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("ULLONG_MAX = %llu\n", ULLONG_MAX);
    return 0;
}
