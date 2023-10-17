#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    double a = 1.0;
    double b = 9.0;
    double h = 3.0;
    double x = a;

    printf("x\t");
    printf("F(x)\n");

    while (x <= b) {
        double result = exp(-x) * sqrt(1 + x);
        printf("%.2f\t%.4f\n", x, result);
        x += h;
    }

    return 0;
}