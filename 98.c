// -Wl,--stack,20971520 // 20 MB stack memory allocation

#include <stdio.h>

int main()
{
    char massiv[2084544] = {0};
    char number;
    printf("C is the best prog lang!\n");
    printf("Address of massiv[0] is %u\n", &massiv[0]);
    printf("Address of number is %u\n", &number);
    return 0;
}
