#include "69_header.h"

int main()
{
    my_CP();

    double radius = 0;
    double area = 0;
    puts("Enter the radius of the circle in meters");
    scanf(" %lf", &radius);
    fflush(stdin);
    area = areaCircle(radius);
    printf("The area of the circle of radius %.3f is %.2f meters\n", radius, area);
    printf("The area of the circle of radius %.3f is %.2f meters\n", 2.123, areaCircle(2.123));

    return 0;
}
