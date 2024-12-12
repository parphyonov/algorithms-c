#include <stdio.h>

long long ipow(int a, int n, int* calls) {
  if (n == 0) return 1;
  if (n == 1) return a;

  long long res = 0;
  *calls += 1;

  if (n % 2 == 0) {
    res = ipow(a, n / 2, calls);
    return res * res;
  } else {
    res = ipow(a, n - 1, calls);
    return a * res;
  }
}

int main(void) {
  int a = 0, n = 0;
  int calls = 0;

  printf("Введите число и степень: ");
  scanf("%d%d", &a, &n);

  long long num = ipow(a, n, &calls);

  printf("%d^%d = %lld\n", a, n, num);
  printf("Возведено в степень за %d рекурсивных операций\n,", calls);

  return 0;
}
