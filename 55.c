#include <stdio.h>
#include <windows.h>

int main()
{
    double rubl;
    double dollar;
    double euro;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("������� ��� ����� ���� double (dollar and euro):\n");
    scanf("%lf %lf", &dollar, &euro);
    rubl = 101.20 * dollar + 107.60 * euro;
    printf("� ��� ����� %.2f ������", rubl);

    return 0;
}
