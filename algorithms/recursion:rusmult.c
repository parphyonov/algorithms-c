#include <stdio.h>

/*
 * "Русский крестьянский способ умножения" 
 * Условия задачи: https://stepik.org/lesson/592538/step/6?unit=587533
 */

void swap(int* a, int* b);
int rusMult(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", rusMult(a, b));
    return 0;
}

// вспомогательная функция для замены значений двух переменных
void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

// непосредственно рекурсивный способ умножения без умножения
// (по условиям задачи из умножения и деления возможно только операции с 2)
int rusMult(int a, int b) {
  if (a < b) swap(&a, &b);
  int res = 0;

  // базовый случай
  if (b == 0) return res;

  // печать при рекурсивном спуске
  printf("%d %d\n", a, b);

  if (b % 2 == 1) res += a;

  // возвращенное значение функции
  int rec_res = rusMult(a * 2, b / 2);
  res += rec_res;

  if (b == 1)
    printf("%d\n", a);
  else
    // печать при возврате из рекурсивных вызовов
    // 1 - возвращенное значение функции
    // 2 - переданное в этот вызов функции
    // 3 - остаток от деления b на 2
    // 4 - вновь вычисленный результат (который будет возвращен)
    printf("%d %d %d %d\n", rec_res, a, b % 2, res);

  return res;
}