#include <stdio.h>

int main(void)
{
	int jumlah_pasukan = 958730;
	int jumlah_pahlawan = 5;

	int pasukan_per_pahlawan = jumlah_pasukan / jumlah_pahlawan;

	printf("Jumlah pasukan yang dibawa Yu Zhong = %d \n", jumlah_pasukan);
	printf("Jumlah pahlawan = %d \n", jumlah_pahlawan);
	printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukan_per_pahlawan);
	return 0;
}