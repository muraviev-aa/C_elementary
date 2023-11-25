// 9.19 s    1.615 s    0.122 s

int main()
{
    register unsigned i;
    register unsigned summa = 0;

    for(i = 0; i < 4000000000; i++)
        summa = summa + i;

    return 0;
}
