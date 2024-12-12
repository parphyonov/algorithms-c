#include <stdio.h>

/*
 * Рекурсивный алгоритм определения значения числа Фибоначчи
 * по его номеру в последовательности
 */

int get_fib(int pos) {
  if (pos == 0) return 0;
  if (pos == 2 || pos == 1) return 1;

  return get_fib(pos - 1) + get_fib(pos - 2);
}

int main(void) {
  int pos = 0;
  int val = 0;

  printf("Введите номер числа в последовательности Фибоначчи: ");
  scanf("%d", &pos);

  val = get_fib(pos);

  printf("Его значение: %d\n", val);

  return 0;
}