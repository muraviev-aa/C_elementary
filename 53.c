#include <stdio.h>

int main()
{
    int iNum;
    char ch;

    printf("Enter var int and var char: ");
    scanf("%d %c", &iNum, &ch);
    printf("iNum is %d, ch is \'%c\'", iNum, ch);

    return 0;
}
