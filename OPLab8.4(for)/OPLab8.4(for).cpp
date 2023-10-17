#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    for (int i = 102; i <= 987; i++) {
        int soti, desyati, odinitsi;
        soti = i / 100;
        desyati = (i / 10) % 10;
        odinitsi = i % 10;

        if (soti != desyati && desyati != odinitsi && soti != odinitsi) {
            printf("%d\n", i);
        }
    }
    return 0;
}