#include <stdio.h>

void numberWorkingDays(int num);

int main()
{
    int monthNumber = 0;

    puts("*** The program is designed to determine the number of");
    puts("working days in any month of 2023 by the month number ***\n");
    puts("Enter the month number:");
    scanf(" %d", &monthNumber);

    numberWorkingDays(monthNumber);

    return 0;
}

void numberWorkingDays(int num)
{
    if (num > 0 && num <= 12)
    {
        if (num == 1) printf("There are 17 working days in January\n");
        else if (num == 2) printf("There are 18 working days in February\n");
        else if (num == 3) printf("There are 22 working days in March\n");
        else if (num == 4) printf("There are 20 working days in April\n");
        else if (num == 5) printf("There are 20 working days in May\n");
        else if (num == 6) printf("There are 21 working days in June\n");
        else if (num == 7) printf("There are 21 working days in July\n");
        else if (num == 8) printf("There are 23 working days in August\n");
        else if (num == 9) printf("There are 21 working days in September\n");
        else if (num == 10) printf("There are 22 working days in October\n");
        else if (num == 11) printf("There are 21 working days in November\n");
        else printf("There are 21 working days in December\n");
        printf("Arbeit macht frei\n\n");
    }
    else if (num > 12) printf("The number must be no more than 12");
    else if (num < 0) printf("The number must be positive");
    else if (num == 0) printf("The number must not be equal to 0");
}
