#include <stdio.h>

int main()
{
    int a, b;
    a = b = 0;

    puts("Enter a:");
    scanf(" %i", &a);
    puts("Enter b:");
    scanf(" %i", &b);

    if (a == b)
    {
        printf("a == b");
        printf("\n");
    }
    else if (a > b)
    {
        printf("a > b");
    }
    else
    {
        printf("a < b");
    }

    return 0;
}
