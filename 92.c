#include <stdio.h>
#define NUMBER 10

int main()
{
    unsigned student[NUMBER] = {3, 4, 3, 5, 4, 3, 3, 3, 4, 2};
    unsigned i;
    unsigned summa = 0;
    double ave = 0;

    for(i = 0; i < NUMBER; i++)
    {
        summa = summa + student[i];
    }

    ave = (double)summa / NUMBER;
    printf("Ave is %.2f\n", ave);

    return 0;
}
