#include <stdio.h>
#include <stdlib.h>

int Selisih(int nilai1, int nilai2) {
    return nilai1 - nilai2;
}

int Mutlak(int nilai) {
    return abs(nilai);
}

int main(void) {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", & x1, & y1, & x2, & y2);

    int jarak = Mutlak(Selisih(x1, x2)) + Mutlak(Selisih(y1, y2));
    printf("\n%d\n", jarak);

    return 0;
}
