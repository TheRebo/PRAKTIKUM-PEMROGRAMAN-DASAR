#include <stdio.h>

int main(void) {
    int pilihan;
    float nilai_pertama, nilai_kedua, hasil;

    while (1) {
        printf("\nPilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");

        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Na'im Handsome\n\n");
            break;
        }

        if (pilihan < 1 || pilihan > 4) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai_pertama);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilai_kedua);

        if (pilihan == 1) {
            hasil = nilai_pertama + nilai_kedua;
            printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (pilihan == 2) {
            hasil = nilai_pertama - nilai_kedua;
            printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else if (pilihan == 3) {
            hasil = nilai_pertama * nilai_kedua;
            printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        } else {
            if (nilai_kedua == 0) {
                printf("Tidak bisa dibagi dengan 0\n");
                continue;
            }
            hasil = nilai_pertama / nilai_kedua;
            printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", nilai_pertama, nilai_kedua, hasil);
        }
    }

    return 0;
}