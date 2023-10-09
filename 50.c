#include <stdio.h>
#include "50.1.h"

int main()
{
    double diametr = 2.12;
    printf("Diametr is %.2f, length is %0.2f\n", diametr, diametr * MY_PI);

    const double exp = 2.71;
    printf("exp is %.2f, address exp is %p\n", exp, &exp);

    return 0;
}
