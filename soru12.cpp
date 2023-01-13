#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    while (1) {
        srand(time(0));
        int x = rand() % 80;  // ekran genisligi
        int y = rand() % 24;  // ekran yüksekligi
        int r = rand() % 10;  // rastgele tamsayi
        int r2 = rand() % 7 + 31;  // rastgele renk
        printf("\033[%d;%dH\033[1;%dm%d\033[0m", y, x, r2, r);
        fflush(stdout); 
        usleep(100000); // 100 milisaniye bekle
    }
    return 0;
}

