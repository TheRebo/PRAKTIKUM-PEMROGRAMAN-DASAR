#include <stdio.h>

#define M_PI 3.14

int main(void)
{
	int jumlah_putaran = 5;
	int jarak_tempuh = 14;

	float keliling_putaran = (float)jarak_tempuh / jumlah_putaran;
	float jari_jari = keliling_putaran / (2 * M_PI);

	printf("Diketahui : \n");
	printf("Pak Dengklek mengelilingi taman = %d Putaran \n", jumlah_putaran);
	printf("Jarak tempuh Pak Dengklek = %d Kilometer \n\n", jarak_tempuh);

	printf("Jawaban : \n");
	printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);

	return 0;
}