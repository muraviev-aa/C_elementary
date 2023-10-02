#include <stdio.h>
#include <math.h>

#define my_PI 3.14159265358979323846

int main()
{
    double diametr = 12.9;
    double circumference = 0;
    double area_circle = 0;
    double square_side = 11.7;
    double square_area = 0;
    double area_rectangle = 0;
    double rectangle_side1 = 27.9;
    double rectangle_side2 = 48.2;

    //Circumference
    circumference = M_PI * diametr;
    printf("Circumference var1 is %.2f", circumference);
    printf("\nCircumference var2 is %.2f\n", my_PI * diametr);

    //Area of ​​a circle
    area_circle = 0.25 * M_PI * diametr * diametr;
    printf("\nArea of a circle var1 is %.3f", area_circle);
    printf("\nArea of a circle var2 is %.3f\n\n", 0.25 * my_PI * diametr * diametr);

    //Square area
    square_area = square_side * square_side;
    printf("Square area is %.2f", square_area);

    //Side square
    printf("\nSide square is %.1f\n\n", sqrtf(square_area));

    //Area of a rectangle
    area_rectangle = rectangle_side1 * rectangle_side2;
    printf("Area of a rectangle is %.2f\n", area_rectangle);

    //Side2 and side1 rectangle
    printf("Side2 rectangle is %.1f\n", area_rectangle / rectangle_side1);
    printf("Side1 rectangle is %.1f\n", area_rectangle / rectangle_side2);

    return 0;
}
