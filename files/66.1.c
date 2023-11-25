#include <stdio.h>
#include <windows.h>

void bendingCenterCalc(int heightUbeam, int widthUbeam, double shelfThickness,
                       double wallThickness, char ch1, char ch2, char ch3);

int main()
{
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    int heightUbeam = 0;
    int widthUbeam = 0;
    double shelfThickness = 0.0;
    double wallThickness = 0.0;
    char ch1, ch2, ch3;
    ch1 = ch2 = ch3 = '0';

    puts("*** The program is designed to determine the location");
    puts("the bending center of the U-beams with parallel faces of the shelves ***");
    puts("Enter the name of the U-beam, its height, width, shelf and wall thickness in mm separated by a space: ");
    scanf(" %c %c %c %d %d %lf %lf", &ch1, &ch2, &ch3, &heightUbeam, &widthUbeam, &shelfThickness, &wallThickness);
    fflush(stdin);

    bendingCenterCalc(heightUbeam, widthUbeam, shelfThickness, wallThickness, ch1, ch2, ch3);
    system("pause>nul");

    return 0;
}

void bendingCenterCalc(int heightUbeam, int widthUbeam, double shelfThickness,
                       double wallThickness, char ch1, char ch2, char ch3)
{
    double part1 = 0.0;
    double part2 = 0.0;
    double bendingCenter = 0.0;
    part1 = 3 * (double)(widthUbeam - 0.5 * wallThickness) * (widthUbeam - 0.5 * wallThickness);
    part2 = (heightUbeam - shelfThickness) + 6 * (widthUbeam - 0.5 * wallThickness);
    bendingCenter = -(part1 / part2) + 0.5 * wallThickness;

    printf("U-beam %c%c%c, the center of the bend relative to the outer face of the shelf %.1f mm\n", ch1, ch2, ch3, bendingCenter);
}
