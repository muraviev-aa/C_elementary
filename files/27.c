#include <stdio.h>

int main()
{
    int credit = 1000;
    printf("Credit is %i, size is %i\n", credit, sizeof(credit)); // acceptable option
    printf("Credit is %i, size is %u\n", credit, sizeof(credit)); // acceptable option
    printf("Credit is %i, size is %zd\n", credit, sizeof(credit)); // a more preferable option
    return 0;
}
