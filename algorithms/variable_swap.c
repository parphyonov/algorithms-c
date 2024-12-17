#include <stdio.h>

/*
 * Простой алгоритм подмены местами значений двух переменных
 */

int main(void) {
  int a = 0, b = 0;

  scanf("%d%d", &a, &b);

  printf("Initial State: A{%d} B{%d}\n", a, b);

  printf("(does the swap)\n");
  int tmp = a;
  a = b;
  b = tmp;

  printf("Final State: A{%d} B{%d}\n", a, b);

  return 0;
}