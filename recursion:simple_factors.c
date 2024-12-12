#include <stdio.h>

void print_factor(unsigned last, unsigned n) {
  if (n == 0) return;

  if (n == 1)
    printf("%u ", last);
  else
    printf("%u^%u ", last, n);
}

void simple_factors(unsigned a, unsigned last, unsigned n) {
  if (a <= 1) {
    print_factor(last, n);
    return;
  }

  if (a % last == 0) {
    simple_factors(a / last, last, n + 1);
  } else {
    simple_factors(a, last + 1, 0);
    print_factor(last, n);
  }
}

int main(void) {
  unsigned num = 0;
  scanf("%u", &num);

  simple_factors(num, 2, 0);

  return 0;
}