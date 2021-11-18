#include <stdio.h> //Осуществляет ввод/вывод на экран
#include <locale.h> //Установка локализации для корректного отображения на экране

int main() //Точка входа в программу
{
    char* locale = setlocale(LC_ALL, ""); //Подключение функции корректного отображения

    float X, A, Y;
    printf("X кг конфет:");
    scanf_s("%f", &X);

    printf("A рублей:");
    scanf_s("%f", &A);

    printf("Y кг конфет:");
    scanf_s("%f", &Y);

    float price;
    price = A / X;

    printf("Цена:%.2f\n", price);
    printf("Стоимость:%.2f\n", Y * price);
    return 0;
}