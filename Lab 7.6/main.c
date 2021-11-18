#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    double A1, B1, C1, A2, B2, C2, D, x, y;

    printf("A1·x + B1·y = C1\n");
    printf("A2·x + B2·y = C2\n");
    
    printf("A1:");
    scanf_s("%f", &A1);

    printf("B1:");
    scanf_s("%f", &B1);

    printf("C1:");
    scanf_s("%f", &C1);

    printf("A2:");
    scanf_s("%f", &A2);

    printf("B2:");
    scanf_s("%f", &B2);

    printf("C2:");
    scanf_s("%f", &C2);

    D = A1 * B2 - A2 * B1;
    x = (C1 * B2 - C2 * B1) / D;
    y = (A1 * C2 - A2 * C1) / D;

    printf("x:%.2f\n", x);
    printf("y:%.2f\n", y);
    return 0;
}