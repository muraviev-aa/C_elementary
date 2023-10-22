#include <stdio.h>

int main()
{
    int a = 15;
    int b = 5;

    if (a > b)
        printf("a > b");

    if (a < b) printf("a < b");

    if (a == b)
        printf("a == b");

    int result;
    result = a > b;
    printf("\n%d\n", result);

    a = 5;
    result = a > b;
    printf("%d\n", result);

    if(1000) printf("Print!\n");

    system("pause");

    return 0;

}
