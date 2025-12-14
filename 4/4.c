#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "RUS");
    float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
    float* ptr_a;

    printf("array = %p\n", (void*)array);
    printf("&array[0] = %p\n", (void*)&array[0]);
    printf("&array = %p\n\n", (void*)&array);

    ptr_a = array;
    printf("Начало: ptr_a=%p, *ptr_a=%f\n", (void*)ptr_a, *ptr_a);
    ptr_a++;
    printf("После ptr_a++: ptr_a=%p, *ptr_a=%f\n", (void*)ptr_a, *ptr_a);
    printf("ptr_a+4: %p, *(ptr_a+4)=%f\n", (void*)(ptr_a + 4), *(ptr_a + 4));
    ptr_a -= 2;
    printf("После ptr_a-2: ptr_a=%p, *ptr_a=%f\n\n", (void*)ptr_a, *ptr_a);

    printf("Проход по массиву с увеличением ptr_a на 2:\n");
    ptr_a = array;
    for (int i = 0; i < 10; i += 2) {
        printf("ptr_a=%p, *ptr_a=%f\n", (void*)ptr_a, *ptr_a);
        ptr_a += 2;
    }
    printf("\nПроход по массиву в обратном порядке:\n");
    ptr_a = &array[9];
    for (int i = 9; i >= 0; i--) {
        printf("ptr_a=%p, *ptr_a=%f\n", (void*)ptr_a, *ptr_a);
        ptr_a--;
    }

}