// -Wl,--stack,20971520

#include <stdio.h>

int main()
{
    char massiv[2084544] = {0};
    char number;
    printf("C is tne best prog lang!\n");
    printf("Address of massiv[0] is %u\n", &massiv[0]);
    printf("Address of number is %u\n", &number);
    return 0;
}
