#include <stdio.h>

int main()
{
    unsigned num = 1000;
    unsigned char test = 200;
    long long int test_1 = 10000;

    printf("Var num is %d, size is %u bytes, address is %p\n", num, sizeof(num), &num);
    printf("Var test is %d, size is %u bytes, address is %p\n", test, sizeof(test), &test);
    printf("Var test_1 is %lld, size is %u bytes, address is %p", test_1, sizeof(test_1), &test_1);
    return 0;
}
