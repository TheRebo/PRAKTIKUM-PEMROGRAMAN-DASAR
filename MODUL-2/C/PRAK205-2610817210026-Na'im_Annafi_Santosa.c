#include <stdio.h>
#include <math.h>

int main(void) {
    float tinggi, sisi_miring;

    scanf("%f %f", &tinggi, &sisi_miring);

    float alas = sqrt(pow(sisi_miring, 2) - pow(tinggi, 2));
    float keliling = tinggi + sisi_miring + alas;
    float luas = 0.5 * alas * tinggi;

    printf("\nAlas = %g cm", alas);
    printf("\nTinggi = %g cm", tinggi);
    printf("\nKeliling = %g cm", keliling);
    printf("\nLuas = %g cm^2", luas);

    return 0;
}