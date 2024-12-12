#include <stdio.h>

/*
 * Рекурсивный алгоритм вычисления факториала числа
 */

long long fact(int num) {
    if (num == 1) return 1;
    return num * fact(num - 1);
}

int main(void) {
    int num = 0;

    scanf("%d", &num);

    long long factorial = fact(num);

    printf("!%d = %lld\n", num, factorial);

    return 0;
}