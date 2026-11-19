#include <stdio.h>

int MaksBilangan(int nilai1, int nilai2, int nilai3, int nilai4) {
    int maks = nilai1;
    if (nilai2 > maks) {
        maks = nilai2;
    }
    if (nilai3 > maks) {
        maks = nilai3;
    }
    if (nilai4 > maks) {
        maks = nilai4;
    }
    return maks;
}

int main(void) {
    int nilai1, nilai2, nilai3, nilai4;
    scanf("%d %d %d %d", & nilai1, & nilai2, & nilai3, & nilai4);

    int hasil = MaksBilangan(nilai1, nilai2, nilai3, nilai4);
    printf("\n%d\n", hasil);

    return 0;
}
