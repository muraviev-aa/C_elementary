#include <stdio.h>

#define INTEGER int
#define REAL double
#define BEGIN {
#define END }


int main()
BEGIN
    INTEGER myNum = 111;
    REAL myDouble = 0.5555;
    printf("myNum is %d\nmyDouble is %.4f\n", myNum, myDouble);

    return 0;
END
