#include <stdio.h>

int main(void) {
    int bilangan;
    scanf("%d", &bilangan);

    if (bilangan == 0) {
        printf("Nol");
    }
    else if (bilangan < 10) {
        printf("Satuan");
    }
    else if (bilangan < 20) {
        printf("Belasan");
    }
    else if (bilangan < 100) {
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }

    return 0;
}