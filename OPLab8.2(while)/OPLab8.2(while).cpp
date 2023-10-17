#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int n;
    printf("Введіть натуральне число(n): ");
    scanf_s("%d", &n);

    if (n < 1) {
        printf("Помилка. n має бути натуральним числом.\n");
        return 1;
    }

    int a = 0;
    int b = 1;
    int i = 1;

    while (i <= n) {
        b *= i * (i + 1) * (2 * i);
        a += b;
        i++;
    }

    printf("Результат: %lld\n", a);

    return 0;
}