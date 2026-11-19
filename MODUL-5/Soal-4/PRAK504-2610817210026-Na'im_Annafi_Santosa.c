#include <stdio.h>

int Reverse(int nilai) {
    int balik = 0;
    while (nilai > 0) {
        balik = balik * 10 + nilai % 10;
        nilai /= 10;
    }
    return balik;
}

int main(void) {
    int nilai1, nilai2, jumlah;
    scanf("%d %d", & nilai1, & nilai2);

    nilai1 = Reverse(nilai1);
    nilai2 = Reverse(nilai2);
    jumlah = nilai1 + nilai2;
    jumlah = Reverse(jumlah);

    printf("\n%d\n", jumlah);

    return 0;
}
