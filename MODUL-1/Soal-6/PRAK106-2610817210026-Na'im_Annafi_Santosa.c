#include <stdio.h>

int main(void)
{
	int a = 4;
	int b = 8;
	int c = 3;

	int sama_dengan = (a == b);
	int lebih_besar = (b > c);
	int tidak_sama = (a != c);

	printf("Variabel a bernilai %d \n", a);
	printf("Variabel b bernilai %d \n", b);
	printf("Variabel c bernilai %d \n", c);

	printf("Apakah a sama dengan b ? jawabannya adalah %d \n", sama_dengan);
	printf("Apakah b lebih besar dari c ? jawabannya adalah %d \n", lebih_besar);
	printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", tidak_sama);

	return 0;
}