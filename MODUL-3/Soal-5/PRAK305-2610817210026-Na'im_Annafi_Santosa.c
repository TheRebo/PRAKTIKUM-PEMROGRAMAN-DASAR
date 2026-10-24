#include <stdio.h>

int main(void) {
    int total_detik;
    scanf("%d", &total_detik);

    int hari = total_detik / 86400;
    int jam = (total_detik % 86400) / 3600;
    int menit = (total_detik % 3600) / 60;
    int detik = total_detik % 60;

    if (hari > 0) {
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }
    else {
        printf("%02d:%02d:%02d", jam, menit, detik);
    }

    return 0;
}