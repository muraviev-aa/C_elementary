#include <stdio.h>

int main()
{
    int grade1, grade2, grade3, grade4;
    grade1 = 4; grade2 = 3; grade3 = 3; grade4 = 4;

    double average;
    average = (double)(grade1 + grade2 + grade3 + grade4) / 4;
    printf("average is %f\n", average);

    // declare an array of four numbers of type int
    int stud[4] = {4, 3, 3, 4};
    average = (double)(stud[0] + stud[1] + stud[2] + stud[3]) / 4;
    printf("average is %f\n", average);

    return 0;
}
