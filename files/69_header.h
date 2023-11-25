#include <stdio.h>
#include <windows.h>

#define MY_PI 3.14159

double areaCircle(double r)
{
    return MY_PI * r * r;
}

void my_CP(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
}
