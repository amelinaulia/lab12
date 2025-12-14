#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");

    float PI = 3.14159, * p1, * p2;
    p1 = p2 = &PI;
    printf("По адресу p1=%p хранится *p1=%g\n", p1, *p1);
    printf("По адресу p2=%p хранится *p2=%g\n", p2, *p2);
    printf("Адрес p1 = %p\n", p1);
    printf("Адрес p1  = %x\n", p1);
}