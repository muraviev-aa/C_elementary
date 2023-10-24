# include <stdio.h>

long long int plus_int(int a, int b)
{
    return (a + b);
}

long long int minus_int(int a, int b)
{
    return (a - b);
}

int main()
{
    printf("%lld\n", plus_int(1000, -400));
    printf("%lld\n", minus_int(1000, -400));

    return 0;
}
