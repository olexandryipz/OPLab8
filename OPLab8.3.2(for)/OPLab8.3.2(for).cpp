#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    double a = 2.5;
    double b = 5.0;
    double h = 0.5;

    printf("x\t");
    printf("F(x)\n");

    for (double x = a; x <= b; x += h) {
        double result = (pow(x, 2) - 1) + cbrt(pow(x, 2));
        printf("%.2f\t%.4f\n", x, result);
    }

    return 0;
}