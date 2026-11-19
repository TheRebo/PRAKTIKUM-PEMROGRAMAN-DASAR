#include <stdio.h>

int MaksBilangan(int nilai1, int nilai2) {
    int maks = nilai1;
    if (nilai2 > maks) {
        maks = nilai2;
    }
    return maks;
}

int MinimBilangan(int nilai1, int nilai2) {
    int minim = nilai1;
    if (nilai2 < minim) {
        minim = nilai2;
    }
    return minim;
}

int main(void) {
    int jumlah;
    scanf("%d", & jumlah);

    int nilai;
    scanf("%d", & nilai);

    int maks = nilai;
    int minim = nilai;

    for (int i = 1; i < jumlah; i++) {
        scanf("%d", & nilai);
        maks = MaksBilangan(maks, nilai);
        minim = MinimBilangan(minim, nilai);
    }

    printf("\n%d %d\n", maks, minim);

    return 0;
}
