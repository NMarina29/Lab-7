#include <stdio.h> //������������ ����/����� �� �����
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    float X, A, Y;
    printf("X �� ������:");
    scanf_s("%f", &X);

    printf("A ������:");
    scanf_s("%f", &A);

    printf("Y �� ������:");
    scanf_s("%f", &Y);

    float price;
    price = A / X;

    printf("����:%.2f\n", price);
    printf("���������:%.2f\n", Y * price);
    return 0;
}