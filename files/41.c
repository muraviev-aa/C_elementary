#include <stdio.h>

#define PI 3.14159 //all real constants have the double type by default

int main()
{
    const double my_PI = 3.14159; // a new way to declare constants
    double diametr_circle = 2.5;
    double length_circle = 0;

    length_circle = PI * diametr_circle;
    printf("diametr_circle is %.1f\nPI is %.5f\nlength_circle is %.2f\n\n", diametr_circle, PI, length_circle);

    double my_length_circle = 0;
    my_length_circle = my_PI * diametr_circle;
    printf("my_length_circle is %.2f\n\n", my_length_circle);
    return 0;
}
