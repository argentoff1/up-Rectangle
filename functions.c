#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "C:\Users\����\Desktop\up ded\up\functions.h"

void proverka(int a, int b, int c, int d) {
    if(a == b || b == c || c == d || d == a){
        printf("������ ������ �������� ��������� \n");
    }
    else {
        printf("������ ������ �� �������� ��������� \n");
    }
}

double square(int a, int b) {
    return a * b;
}

double perimetr(int a, int b) {
    return 2 * (a + b);
}

double diagonal(int a, int b) {
    return sqrt(pow(a, 2) + pow(b, 2));
}
