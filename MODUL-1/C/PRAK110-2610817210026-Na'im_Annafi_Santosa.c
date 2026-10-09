#include <stdio.h>
#include <math.h>

int main(void)
{
	int alas = 5;
	int tinggi = 12;

	float sisi_miring = hypot(alas, tinggi);
	float keliling = alas + tinggi + sisi_miring;
	float luas = 0.5 * alas * tinggi;

	printf("Diketahui : \n");
	printf("Alas = %d cm \n", alas);
	printf("Tinggi = %d cm \n\n", tinggi);

	printf("Jawab : \n");
	printf("Sisi A = %d cm \n", tinggi);
	printf("Sisi B = %.0f cm \n", sisi_miring);
	printf("Sisi C = %d cm \n", alas);
	printf("Keliling = %.0f cm \n", keliling);
	printf("Luas = %.0f cm", luas);

	return 0;
}