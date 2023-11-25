#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;

    if (x == 9)
        printf("x == 9\n");
    else
        printf(" x != 9\n");

    if (x == 10)
    {
        printf("x == 10\n");
        exit(0);
    }
    else
    {
        printf("x != 10\n");
        exit(1);
    }

    return 0;
}
