#include <stdio.h>

int main()
{
    /*
    Variable names can contain:
    1. letters of the Latin alphabet in both registers;
    2. numbers;
    3. the sign_;
    The name of the variable must begin with a letter or a sign_
    */
    unsigned int boots = 2;
    int dog_count = 10;
    long count3 = 12;
    unsigned char _1country = 123;
    //char 1_school_number = 20; // error
    char CH = 2;
    char Ch = 4;
    char ch = 5;

    printf("CH = %d, Ch = %d, ch = %d", CH, Ch, ch);

    return 0;
}
