#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int number;
    printf("8 tabaninda pozitif bir tamsayi girin: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Geçersiz girdi. Lütfen pozitif bir tamsayi girin.\n");
        return 0;
    }

    int base = 8;
    int decimal_number = 0;
    int i = 0;
    while (number > 0) {
        int digit = number % 10;
        decimal_number += digit * pow(base, i);
        number /= 10;
        i++;
    }

    printf("%d tabaninda sayi 10 tabaninda %d olur.\n", base, decimal_number);

    return 0;
}

