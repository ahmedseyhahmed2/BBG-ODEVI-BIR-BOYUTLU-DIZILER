#include <stdio.h>

int main() {
    int kenar;
    printf("Kenar uzunlugunu giriniz (1-20): ");
    scanf("%d", &kenar);

    int i, j;
    for (i = 1; i <= kenar; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

