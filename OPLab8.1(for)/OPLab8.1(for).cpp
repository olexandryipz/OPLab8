#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    float a, b;

    for (a = 1; a <= 11; a++) {
        for (b = 1; b <= 3.1; b += 0.2) {
            printf("a = %.1f, b = %.1f, Добуток = %.2f\n", a, b, a * b);
        }
    }

    return 0;
}