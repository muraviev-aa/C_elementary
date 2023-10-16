#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    unsigned long totalTime = 0;
    unsigned long mSec = 0;
    unsigned long sec = 0;
    unsigned long minut = 0;
    unsigned long hour = 0;
    unsigned long days = 0;

    unsigned long temp = 0;

    totalTime = GetTickCount();
    temp = totalTime;

    mSec = temp % 1000;
    printf("mSec is %u\n", mSec);

    temp = temp / 1000;
    sec = temp % 60;
    printf("sec is %u\n", sec);

    temp = temp / 60;
    minut = temp % 60;
    printf("minut is %u\n", minut);

    temp = temp / 60;
    hour = temp % 24;
    printf("hour is %u\n", hour);

    days = temp / 24;
    printf("days is %u\n", days);

    system("pause>null");

    return 0;
}
