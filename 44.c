#include <stdio.h>

int main()
{
    int ch1 = 88;
    int ch2 = 89;
    int ch3 = 90;

    char enter = '\n';

    printf("%c%c%c\n", ch1, ch2, ch3);
    printf("%c%c%c\n", 'a', 'b', 'c');
    printf("%c%c%c\n", 88, 89, 90);
    printf("%c%c%c\n", '\130', '\131', '\132');
    printf("%c%c%c%c", enter, '\n', 10, '\12');

    return 0;
}
