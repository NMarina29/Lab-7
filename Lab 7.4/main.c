#include <stdio.h> //������������ ����/����� �� �����
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    float V1, V2, S, T, S2;
    printf("�������� V1:");
    scanf_s("%f", &V1);

    printf("�������� V2:");
    scanf_s("%f", &V2);

    printf("���������� S:");
    scanf_s("%f", &S);

    printf("����� T-�����:");
    scanf_s("%f", &T);

    S2 = S + V1 * T + V2 * T;

    printf("���������� ����� ������������ ����� �-�����:%.2f\n", S2);
    return 0;
}