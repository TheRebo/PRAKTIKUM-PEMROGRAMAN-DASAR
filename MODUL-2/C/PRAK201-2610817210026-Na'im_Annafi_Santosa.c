#include <stdio.h>

int main(void) {
    char nama[50], nim[50], kelas[50], ttl[50], alamat[50], hobby[50], nomor[50];

    printf("%-23s: ", "Nama");
    fgets(nama, sizeof(nama), stdin);
    printf("%-23s: ", "NIM");
    fgets(nim, sizeof(nim), stdin);
    printf("%-23s: ", "Kelas Paralel");
    fgets(kelas, sizeof(kelas), stdin);
    printf("%-23s: ", "Tempat/Tanggal Lahir");
    fgets(ttl, sizeof(ttl), stdin);
    printf("%-23s: ", "Alamat");
    fgets(alamat, sizeof(alamat), stdin);
    printf("%-23s: ", "Hobby");
    fgets(hobby, sizeof(hobby), stdin);
    printf("%-23s: ", "No. HP");
    fgets(nomor, sizeof(nomor), stdin);

    printf("\n");
    printf("%-23s: %s", "Nama", nama);
    printf("%-23s: %s", "NIM", nim);
    printf("%-23s: %s", "Kelas Paralel", kelas);
    printf("%-23s: %s", "Tempat/Tanggal Lahir", ttl);
    printf("%-23s: %s", "Alamat", alamat);
    printf("%-23s: %s", "Hobby", hobby);
    printf("%-23s: %s", "No. HP", nomor);

    return 0;
}
