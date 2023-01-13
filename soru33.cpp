#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    printf("pozitif tam sayi giriniz : ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("gecersiz giris lutfen tam sayi giriniz .\n");
        return 0;
    }

    int base = 8;
    int result[100];
    int i = 0;
    while (number > 0) {
        result[i] = number % base;
        number /= base;
        i++;
    }

    printf("girilen sayi  %d is: ", base);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", result[j]);
    }
    printf("\n");

    return 0;
}

