#include <stdio.h>

int main(void) {
    float a, b, i, j, x, y;

    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float hasil = (a - b) * (i / j) - (x + y);

    printf("\n%.3f", hasil);

    return 0;
}