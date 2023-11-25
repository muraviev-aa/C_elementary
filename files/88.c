#include <stdio.h>

int main()
{
    unsigned students[30] = {21, 22, 23, 24, 25};
    printf("%u\n", students[0]);
    printf("%u\n", students[1]);
    printf("%u\n", students[2]);
    printf("%u\n", students[3]);
    printf("%u\n", students[4]);
    printf("%u\n", students[15]);
    printf("%u\n", students[20]);

    getc(stdin); // the function waits for a keypress and does nothing else

    return 0;
}
