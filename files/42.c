#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846L

int main()
{
    double diametr = 2.5;
    double circumference;
    circumference = PI * diametr;
    printf("Circumference var1 is %.16f\n", M_PI * diametr);
    printf("Circumference var2 is %.16Lf\n", circumference);
    return 0;
}
