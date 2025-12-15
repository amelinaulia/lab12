# Домашнее задание к работе 12
## Условие задачи
Напишите программу, которая вычисляет размер основных типов данных в байтах :
char
### Алгоритм
1.Начало программы 
2.Объявить массив
char arr[105025] — массив из двух элементов типа double 
3.Вычислить размер типа double
size = (char*)(&arr[105025]) - (char*)(&arr[0])  - разница между адресами двух соседних элементов = размер типа char 
4.Вывести результат
Конец программы
### Блок-схема

![Блок схема алгоритма](labaa12.drawio.png)

## 2. Реализация программы:
   
      #define _CRT_SECURE_NO_WARNINGS
      #define _USE_MATH_DEFINES
      #include <locale.h>
      #include <stdio.h>
      #include <stdlib.h>
      #include <conio.h>
      #include <math.h>
      
      int main() {
          setlocale(LC_ALL, "RUS");
          char arr[2];
          long size = (char*)(&arr[1]) - (char*)(&arr[0]);
          printf("Разница: %ld\n", size);
          if (size == sizeof(char)) {
              printf("\n Результаты совпадают\n");
          }
          else {
              printf("\n Результаты не совпадают\n");
          }
          return 0;
      }
## 3. Результат работы программы
![Результат работы программы](image.png)
## 4. Информация о разработчике
Амелина Юлия, бИПТ-252
