#include <stdio.h>

/*
 * "Русский крестьянский способ деления
 * (деления целого без остатка на нечетное число)"
 * Условия задачи: https://stepik.org/lesson/592538/step/7?unit=587533
 */

int rusDel(int a, int b) {
  int mult = 0;
  int rem = a % 2;

  if (a - b == 0) {
    printf("1\n");
    return 1;
  }

  if (rem == 0) {
    a /= 2;
    mult = 2;
  } else {
    a -= b;
    mult = 1;
  }

  // рекурсивный спуск
  if (a != 0) printf("%d %d %d\n", a, mult, rem);

  int rd = rusDel(a, b);       // результат рекурсии
  int part = rd * mult + rem;  // вычисление результата

  // рекурсивный подъем
  // формула частичного результата для part
  printf("%d * %d + %d = %d\n", rd, mult, rem, part);

  return part;
}

int main(void) {
  int a = 0, b = 0;

  scanf("%d%d", &a, &b);

  int rd = rusDel(a, b);

  printf("%d\n", rd);

  return 0;
}