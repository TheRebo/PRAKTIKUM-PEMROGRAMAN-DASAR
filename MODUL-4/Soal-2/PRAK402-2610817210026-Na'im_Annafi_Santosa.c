#include <stdio.h>

int main(void) {
    int batas, genap_terbesar, angka;

    scanf("%d", &batas);

    if (batas % 2 == 0) {
        genap_terbesar = batas;
    } else {
        genap_terbesar = batas - 1;
    }

    for (angka = 1; angka <= batas; angka += 2) {
        if (angka > 1) {
            printf(" ");
        }
        printf("%d", angka);
    }
    printf("\n");

    for (angka = genap_terbesar; angka >= 2; angka -= 2) {
        if (angka < genap_terbesar) {
            printf(" ");
        }
        printf("%d", angka);
    }

    return 0;
}