#include <stdio.h>

int main()
{
    char massiv[4] = {11, 12, 13, 14};
    char number = 24;

    printf("%d\n", massiv[0]);
    printf("%d\n", massiv[1]);
    printf("%d\n", massiv[2]);
    printf("%d\n\n", massiv[3]);

    printf("%d\n\n", number);

    massiv[0] = 10;
    massiv[1] = 20;
    massiv[2] = 30;
    massiv[3] = 40;

    //   1 byte     1 byte    1 byte    1 byte   1 byte
    // |massiv[0]||massiv[1]|massiv[2]|massiv[3]|number|
    massiv[4] = 50; // !!! ERROR !!! There is no such element in the array

    printf("%d\n", massiv[0]);
    printf("%d\n", massiv[1]);
    printf("%d\n", massiv[2]);
    printf("%d\n\n", massiv[3]);

    printf("%d\n\n", number);

    return 0;
}
