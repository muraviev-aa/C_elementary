#include <stdio.h>

int main()
{
    unsigned x, y, z;
    unsigned count = 0;

    for (x = 0; x < 1000; x++)
    {
        for (y = 0; y < 1200; y++)
        {
            for (z = 0; z < 500; z++)
            {
                count++;
                if (count == 1000)
                    goto label1;
            }
        }
    }

    label1:
        printf("The end, count is %u\n", count);

    return 0;
}
