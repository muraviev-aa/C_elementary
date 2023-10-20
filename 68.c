#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define MY_PI 3.14159

double areaCircle(double r);

int main()
{
    //SetConsoleCP(1251); SetConsoleOutputCP(1251);

    double radius = 0;
    double area = 0;

    puts("Enter the radius of the circle in meters");
    scanf(" %lf", &radius);
    fflush(stdin);
    area = areaCircle(radius);
    printf("The area of the circle of radius %.3f is %.3f meters\n", radius, area);
    printf("The area of the circle of radius %.3f is %.3f meters\n", 2.123, areaCircle(2.123));

    return 0;
}

double areaCircle(double r)
{
    return MY_PI * r * r;
}
