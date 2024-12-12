#include <stdio.h>

/*
 * Алгоритм Евклида для поиска наибольшего общего делителя
 * двух чисел с помощью рекурсии
 */

int get_gcd(int a, int b) {
  if (a % b == 0) return b;
  return get_gcd(b, a % b);
}

int main(void) {
  int a = 0, b = 0;

  scanf("%d%d", &a, &b);

  int gcd = get_gcd(a, b);

  printf("%d and %d's greatest common devisor is %d\n", a, b, gcd);
  return 0;
}