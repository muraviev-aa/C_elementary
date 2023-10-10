#include <stdio.h>

int main()
{
    unsigned uNumber = 0;
    unsigned uTrio;

    printf("Enter unsigned number: ");
    scanf(" %u", &uNumber);
    uTrio = uNumber * uNumber * uNumber;
    printf("uNumber is %u, uTrio is %u\n", uNumber, uTrio);

    return 0;
}
