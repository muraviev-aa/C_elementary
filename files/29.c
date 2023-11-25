#include <stdio.h>
#include <conio.h> // for use getch()

int main()
{
    int var1, var2, var3;
    var1 = var2 = var3 = 1;

    printf("var1 %p, var2 %p, var3 %p\n", &var1, &var2, &var3); // the right option
    printf("var1 %u, var2 %u, var3 %u\n", &var1, &var2, &var3); // the correct option
    getch();
    return 0;
}
