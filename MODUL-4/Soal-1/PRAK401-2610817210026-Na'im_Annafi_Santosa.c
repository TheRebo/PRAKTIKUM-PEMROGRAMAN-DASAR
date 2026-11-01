#include <stdio.h>

int main(void) {
    int kelipatan, angka;
    char simbol;

    scanf("%d %c", &kelipatan, &simbol);

    for (angka = 1; angka <= 50; angka++) {
        if (angka > 1) {
            printf(" ");
        }

        if (angka % kelipatan == 0) {
            printf("%c", simbol);
        } else {
            printf("%d", angka);
        }
    }

    return 0;
}