#include <stdio.h>

int main(void) {
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("positif");
    }
    else if (bilangan < 0) {
        printf("negatif");
    }
    else {
        printf("nol");
    }

    return 0;
}