#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
	int* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));