#include <stdio.h> //������������ ����/����� �� �����
#include <locale.h> //��������� ����������� ��� ����������� ����������� �� ������

int main() //����� ����� � ���������
{
    char* locale = setlocale(LC_ALL, ""); //����������� ������� ����������� �����������

    float a, res;
    printf("������� a: ");
    scanf_s("%f", &a);

    res = (a * 3.14) / 180;

    printf("%f\n", res);
    return 0; //������� �������������� �������� ����� ����������� �������
}
