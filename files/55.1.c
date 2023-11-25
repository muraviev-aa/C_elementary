#include <stdio.h>
#include <windows.h>

int main()
{
    double width = 0;
    double height = 0;
    double xI = 0; // moment of inertia relative to the X axis
    double yI = 0; // moment of inertia relative to the Y axis

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("*** The program is designed to calculate moments of inertia\n");
    printf("rectangular cross section relative to the X and Y axes ***\n\n");
    printf("Enter the width and height of the rectangular section separated by a space in sm:\n");
    scanf("%lf %lf", &width, &height);
    xI = width * height * height * height / 12;
    yI = height * width * width * width / 12;
    printf("Moment of inertia relative to the X axis: %.2f sm^4, relative to the Y axis: %.2f sm^4\n", xI, yI);

    return 0;
}
