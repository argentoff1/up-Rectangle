#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 10;
    int b = 7;
    int c = 10;
    int d = 7;

    proverka(a, b, c, d);
    printf("Диагональ прямоугольника равна - %.2f \n", diagonal(a, b));
    printf("Периметр прямоугольника равен - %.2f \n", perimetr(a, b));
    printf("Площадь прямоугольника равна - %.2f \n", square(a, b));
}
