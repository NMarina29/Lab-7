#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    float A, B, x;
    printf("A:");
    scanf_s("%f", &A);

    printf("B:");
    scanf_s("%f", &B);

    x = -1 * B / A;

    printf("x:%.2f\n", x);
    return 0;
}