#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    printf("int------------\n");
    int* pa, x = 5;
    pa = &x;
    printf("По адресу %p хранится *pa=%d\n", pa, *pa);
    pa++;
    printf("По адресу %p хранится *pa=%d\n", pa, *pa);
    pa--;
    printf("По адресу %p хранится *pa=%d\n", pa, *pa);
    printf("double------------\n");


    double* pa2, x2 = 5;

    pa2 = &x2;
    printf("По адресу %p хранится *pa2=%f\n", pa2, *pa2);
    pa2++;
    printf("По адресу %p хранится *pa2=%f\n", pa2, *pa2);
    pa2--;
    printf("По адресу %p хранится *pa2=%f\n", pa2, *pa2);
    printf("char------------\n");



    char* pa3, x3 = 5;

    pa3 = &x3;
    printf("По адресу %p хранится *pa3=%c \n", pa3, *pa3);
    pa3++;
    printf("По адресу %p хранится *pa3=%c \n", pa3, *pa3);
    pa3--;
    printf("По адресу %p хранится *pa3=%c \n", pa3, *pa3);
    printf("long double------------\n");

    long double* pa4, x4 = 5;

    pa4 = &x4;
    printf("По адресу %p хранится *pa4=%Lg \n", pa4, *pa4);
    pa4++;
    printf("По адресу %p хранится *pa4=%Lg \n", pa4, *pa4);
    pa4--;
    printf("По адресу %p хранится *pa4=%Lg \n", pa4, *pa4);
    printf("short unsigned int ------------\n");

    short unsigned int* pa5, x5 = 5;

    pa5 = &x5;
    printf("По адресу %p хранится *pa5=%hu \n", pa5, *pa5);
    pa5++;
    printf("По адресу %p хранится *pa5=%hu \n", pa5, *pa5);
    pa5--;
    printf("По адресу %p хранится *pa5=%hu \n", pa5, *pa5);
    printf(" _Bool ------------\n");
    _Bool* pa6, x6 = 5;
    pa6 = &x6;
    printf("По адресу %p хранится *pa6=%hu \n", pa6, *pa6);
    pa6++;
    printf("По адресу %p хранится *pa6=%hu \n", pa6, *pa6);
    pa6--;
    printf("По адресу %p хранится *pa5=%hu \n", pa6, *pa6);
}