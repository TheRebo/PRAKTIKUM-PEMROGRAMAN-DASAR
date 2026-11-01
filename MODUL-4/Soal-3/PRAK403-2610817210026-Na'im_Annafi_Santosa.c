#include <stdio.h>

int main(void) {
    int angka_pertama, angka_kedua, arah, selisih, jumlah_pasangan, nomor_pasangan, angka_kiri, angka_kanan;

    scanf("%d %d", &angka_pertama, &angka_kedua);

    if (angka_pertama < angka_kedua) {
        arah = 1;
        selisih = angka_kedua - angka_pertama;
    } else {
        arah = -1;
        selisih = angka_pertama - angka_kedua;
    }

    jumlah_pasangan = selisih + 1;

    for (nomor_pasangan = 0; nomor_pasangan < jumlah_pasangan; nomor_pasangan++) {
        angka_kiri = angka_pertama + nomor_pasangan * arah;
        angka_kanan = angka_kedua - nomor_pasangan * arah;

        if (nomor_pasangan > 0) {
            printf(" - ");
        }
        printf("%d %d", angka_kiri, angka_kanan);
    }
    printf("\n");

    return 0;
}