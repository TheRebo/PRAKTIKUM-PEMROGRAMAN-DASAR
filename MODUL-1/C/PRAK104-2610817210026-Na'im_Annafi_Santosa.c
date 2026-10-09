#include <stdio.h>

int main(void)
{
	int harga_sepatu_a = 400000;
	int harga_sepatu_b = 350000;
	int diskon_sepatu_a = 13;
	int diskon_sepatu_b = 21;

	float harga_akhir_a = (float)harga_sepatu_a * (100 - diskon_sepatu_a) / 100;
	float harga_akhir_b = (float)harga_sepatu_b * (100 - diskon_sepatu_b) / 100;

	printf("Harga sepatu A adalah %d \n", harga_sepatu_a);
	printf("Harga sepatu B adalah %d \n", harga_sepatu_b);

	printf("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %.0f \n", diskon_sepatu_a, harga_akhir_a);
	printf("Sepatu B mendapat diskon %d%% sehingga harganya menjadi %.0f", diskon_sepatu_b, harga_akhir_b);

	return 0;
}