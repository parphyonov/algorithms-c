#include <stdio.h>

/* Рекурсивный алгоритм решения задачи "Делим конфеты пополам":
 * https://stepik.org/lesson/592538/step/1?unit=587533
 */

int count_kids(int candies, int* kids) {
  (*kids) += 1;

  if (candies == 1) {
    printf("Подошел ребенок № %d. и взял 1 конфету\n", *kids);
    return 1;
  }

  printf("Подошел ребенок № %d. и взял %d конфет\n", *kids, candies / 2);
  int res = 1 + count_kids(candies - candies / 2, kids);

  return res;
}

int main(void) {
  int candies = 0;
  int kids = 0;

  printf("Введите количество конфет: ");
  scanf("%d", &candies);

  count_kids(candies, &kids);

  return 0;
}