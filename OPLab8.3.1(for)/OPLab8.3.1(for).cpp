#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    double a = 1.0;
    double b = 9.0;
    double h = 3.0;

    printf("x\t");
    printf("F(x)\n");

    for (double x = a; x <= b; x += h) {
        double result = exp(-x) * sqrt(1 + x);
        printf("%.2f\t%.4f\n", x, result);
    }

    return 0;
}