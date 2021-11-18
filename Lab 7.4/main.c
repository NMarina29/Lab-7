#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    float V1, V2, S, T, S2;
    printf("Скорость V1:");
    scanf_s("%f", &V1);

    printf("Скорость V2:");
    scanf_s("%f", &V2);

    printf("Расстояние S:");
    scanf_s("%f", &S);

    printf("Время T-часов:");
    scanf_s("%f", &T);

    S2 = S + V1 * T + V2 * T;

    printf("Расстояние между автомобилями через Т-часов:%.2f\n", S2);
    return 0;
}