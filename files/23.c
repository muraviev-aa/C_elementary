#include <stdio.h>

int main()
{
    int euro = 1200;
    int dollar = 500;
    int rubl = 2009;

    printf("Address var euro is %p, dollar is %p, rubl is %p", &euro, &dollar, &rubl);
    return 0;
}
