#include <stdio.h>
#include <windows.h>

int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    char ch1, ch2, ch3;
    ch1 = ch2 = ch3 = '0';

    //var1 - the scanf() function writes a space as a character
    puts("Enter your initials: ");
    scanf("%c%c%c", &ch1, &ch2, &ch3);
    fflush(stdin); // clear the standard input stream (keyboard)
    printf("%c%c%c\n", ch1, ch2, ch3);

    //var2 - the scanf() function does not write a space as a character
    puts("Enter your initials: ");
    scanf(" %c %c %c", &ch1, &ch2, &ch3);
    fflush(stdin);
    printf("%c%c%c\n", ch1, ch2, ch3);

    return 0;
}
