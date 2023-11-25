#include <stdio.h>

int main()
{
    int massiv1[2] = {0};
    int massiv2[2] = {0};

    printf("Address of massiv1 is %u\n", massiv1);
    printf("Address of massiv2 is %u\n\n", massiv2);

    //   4 bytes    4 bytes    4 bytes    4 bytes
    // |massiv2[0]|massiv2[1]|massiv1[0]|massiv1[1]|
    //   6422256    6422260    6422264    6422268

    printf("massiv1[0] is %d\n", massiv1[0]);
    printf("massiv1[1] is %d\n", massiv1[1]);

    massiv2[2] = 22; // !!! ERROR !!! There is no such element in the array
    massiv2[3] = 33; // !!! ERROR !!! There is no such element in the array

    printf("massiv1[0] is %d\n", massiv1[0]);
    printf("massiv1[1] is %d\n", massiv1[1]);

    return 0;
}
