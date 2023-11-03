#include <stdio.h>

int main()
{
    int score[10];

    printf("Size of array \"score\" is %zu bytes\n", sizeof(score));
    printf("Size of one element of array is %zu bytes\n", sizeof(score[0]));
    printf("The array contains %u elements\n\n", sizeof(score) / sizeof(score[0]));

    printf("Address of score[0] is %p\n", &score[0]);
    printf("Address of score is %p\n", score);

    return 0;
}
