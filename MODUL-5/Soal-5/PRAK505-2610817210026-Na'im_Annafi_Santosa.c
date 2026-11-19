#include <stdio.h>

void Biodata(int tahun_lahir, char nama[], char asal[]) {
    int tahun_sekarang = 2020;
    int umur = tahun_sekarang - tahun_lahir;

    printf("\nPerkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main(void) {
    int tahun_lahir;
    char nama[50], asal[50];

    scanf("%d", & tahun_lahir);
    scanf(" %49[^\n]", nama);
    scanf(" %49[^\n]", asal);

    Biodata(tahun_lahir, nama, asal);

    return 0;
}
