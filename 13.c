// Сколько битов в байте?
// CHAR_BIT = 8 - КОНСТАНТА

#include <stdio.h>
#include <limits.h>

// ключевое слово_имя константы_ значение
#define INT_BIT 32

int main()
{
    printf("Bite is %u bits\n", CHAR_BIT);
    printf("Int is %u bits\n", INT_BIT);
    return 0;
}
