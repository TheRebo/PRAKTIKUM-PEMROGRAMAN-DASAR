#include <stdio.h>

int main(void) {
    float nilai_pertama, nilai_kedua;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &nilai_pertama);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &nilai_kedua);

    float hasil_penjumlahan = nilai_pertama + nilai_kedua;

    printf("\nHasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", nilai_pertama, nilai_kedua, hasil_penjumlahan);

    return 0;
}