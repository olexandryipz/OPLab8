#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int number = 102;

    while (number <= 987) {
        int soti = number / 100;
        int desyati = (number / 10) % 10;
        int odinitsi = number % 10;

        if (soti != desyati && desyati != odinitsi && soti != odinitsi) {
            printf("%d\n", number);
        }

        number++;
    }

    return 0;
}