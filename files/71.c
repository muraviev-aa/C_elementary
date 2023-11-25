#include <stdio.h>

int main()
{
    double num = 0.2;

    if (num == 0.2) printf("num == 0.2");
    if (num > 0.2) printf("num > 0.2");
    if (num < 0.2) printf("num < 0.2");

    printf("\nnum is %.17f", num);

    return 0;
}
