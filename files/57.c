#include <stdio.h>

int main()
{
    char ch;
    int iNum;
    double dNum;

    puts("Enter character: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    fflush(stdin); // emptying the buffer with fflush(), stdin - standard input
    puts("Enter int number: ");
    scanf("%d", &iNum);
    printf("%d\n", iNum);
    fflush(stdin); // emptying the buffer with fflush(), stdin - standard input
    puts("Enter double number: ");
    scanf("%lf", &dNum);
    printf("%f\n", dNum);
    fflush(stdin); // emptying the buffer with fflush(), stdin - standard input

    return 0;
}
