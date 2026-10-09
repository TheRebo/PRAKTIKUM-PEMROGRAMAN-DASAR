#include <stdio.h>

int main(void)
{
	int sisi_a = 4;
	int sisi_b = 5;
	int sisi_c = 7;
	int harga_per_meter = 85000;

	int keliling_tanah = sisi_a + sisi_b + sisi_c;
	int total_biaya = harga_per_meter * keliling_tanah;

	printf("Diketahui : \n");
	printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d \n", sisi_a, sisi_b, sisi_c);
	printf("Keliling Tanah Pak Dengklek adalah %d \n", keliling_tanah);
	printf("Harga tanah Per Meter adalah %d \n", harga_per_meter);

	printf("Jawaban : \n");
	printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", total_biaya);

	return 0;
}