#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

//void main(void)
//{
//setlocale(LC_ALL, "RUS");
//int x = 0x12345678; {//переменная инициализированная значением 0x12345678
//int* prt; //указатель для исследуемой переменной
//unsigned char* a1, * a2, * a3, *a4; //указатели на байты
//unsigned char* a; //указатель на байт
//	prt = &x;//получение адреса переменной
//	a = (unsigned char*)prt;//преобразование типа для получения указател на один байт
//	a1 = a + 3;// получение 4-го байта числа х
//	a2 = a + 2;
//	a3 = a + 1;
//	a4 = a; // получение первого байта числа х
//	printf("%02X\n%02X\n%02X\n%02X\n", *a1, *a2, *a3, *a4);
//	}

void print_bytes(void* ptr, size_t size) {
    unsigned char* p = (unsigned char*)ptr;
    printf("Побайтовое представление (%zu байт): ", size);
    for (size_t i = 0; i < size; i++) {
        printf("%.2x ", p[i]);
    }
    printf("\n");
}

int main(void) {
    setlocale(LC_ALL, "RUS");

    int i = 12345;
    float f = 12345.0f;
    double d = 12345.0;

    printf("int i = %d\n", i);
    print_bytes(&i, sizeof(i));

    printf("float f = %f\n", f);
    print_bytes(&f, sizeof(f));

    printf("double d = %lf\n", d);
    print_bytes(&d, sizeof(d));

    return 0;
}