#include <stdio.h>
#include <Windows.h>
#include <math.h>

int main() {
    float a = 1.0, b = 1.0;

    while (a <= 11) {
        b = 1.0;
        while (b <= 3.1) {
            printf("a = %.1f, b = %.1f, Добуток = %.2f\n", a, b, a * b);
            b += 0.2;
        }
        a += 1.0;
    }

    return 0;
}