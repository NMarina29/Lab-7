#include <stdio.h> //������������ ����/����� �� �����
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    float A, B, x;
    printf("A:");
    scanf_s("%f", &A);

    printf("B:");
    scanf_s("%f", &B);

    x = -1 * B / A;

    printf("x:%.2f\n", x);
    return 0;
}