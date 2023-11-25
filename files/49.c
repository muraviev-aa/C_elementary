#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp");
    system("chcp 1251"); // system("chcp 1251 > nul");
    puts("Привет, Мир!");
    //system("help");
    system("help chcp");
    system("pause");//system("pause > nul");
    return 0;
}
