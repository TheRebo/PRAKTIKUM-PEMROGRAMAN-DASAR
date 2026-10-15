#include <stdio.h>
#include <math.h>

int main(void) {
    float jari_jari, tinggi;
    float PI = (float)22 / 7;

    scanf("%f %f", &jari_jari, &tinggi);

    float volume =  PI * pow(jari_jari, 2) * tinggi;
    float luas = 2 * PI * jari_jari * (jari_jari + tinggi);
    float keliling = 2 * PI * jari_jari;

    printf("\nVolume = %.2f\n", volume);
    printf("Luas = %.2f \n", luas);
    printf("Keliling = %.2f", keliling);

    return 0;
}