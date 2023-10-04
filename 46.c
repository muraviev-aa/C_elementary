#include <stdio.h>

int main()
{
    int num = 395634654;
    int oct_num = 10;
    int hex_num = 0xfff;

    printf("%o %d %x\n", num, num, num);
    printf("%o %d %X\n", num, num, num);
    printf("%o %d %#X\n", num, num, num);
    printf("%o %d %#x\n\n", num, num, num);

    printf("%o %d %x\n", oct_num, oct_num, oct_num);
    printf("%o %d %x\n", hex_num, hex_num, hex_num);
    return 0;
}
