#include <stdio.h>

int main(void) {
    int a, b, sementara;
    scanf("%d %d", &a, &b);

    if (a > b) {
        sementara = a;
        a = b;
        b = sementara;
    }

    printf("%d %d", a, b);

    return 0;
}