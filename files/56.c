#include <stdio.h>

int main()
{
    char ch;
    puts("Enter character: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    puts("Enter number (char): ");
    scanf("%hhd", &ch); // %hhd - type char as a number
    printf("%hhd\n", ch);

    return 0;
}
