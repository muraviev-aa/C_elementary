#include <stdio.h>

void comparison(int first, int second);

int main()
{
    int a, b;
    a = b = 0;

    puts("Enter a:");
    scanf(" %i", &a);
    puts("Enter b:");
    scanf(" %i", &b);

    comparison(a, b);

    return 0;
}

void comparison(int first, int second)
{
    if (first == second)
    {
        printf("a == b");
        printf("\n");
    }
    else if (first > second)
    {
        printf("a > b");
    }
    else
    {
        printf("a < b");
    }
}
