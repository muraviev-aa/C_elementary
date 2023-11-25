#include <stdio.h>

int main()
{
    int credit = 0;
    long int debet = 100;
    unsigned long long int budget = 1000;
    char test = 2;
    short int test_1 = 10;

    printf("Size of var credit is %u bytes\n", sizeof(credit));
    printf("Size of int is %u bytes\n\n", sizeof(int));

    printf("Size of var debet is %u bytes\n", sizeof(debet));
    printf("Size of long int is %u bytes\n", sizeof(long int));
    printf("Size of long is %u bytes\n\n", sizeof(long)); // long int = long

    printf("Size of var budget is %u bytes\n", sizeof(budget));
    printf("Size of long long int is %u bytes\n\n", sizeof(long long int));

    printf("Size of var test is %u bytes\n", sizeof(test));
    printf("Size of char is %u bytes\n\n", sizeof(char));

    printf("Size of test_1 is %u bytes\n", sizeof(test_1));
    printf("Size of short int is %u bytes\n\n", sizeof(short int));

    return 0;
}
