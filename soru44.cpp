#include <stdio.h>
#include <string.h>

int main() {
    char mesaj[100];
    printf("Bir mesaj girin: ");
    fgets(mesaj, 100, stdin);

    printf("ASCII tam sayi karsiliklari: ");
    for (int i = 0; i < strlen(mesaj); i++) {
        printf("%d ", mesaj[i]);
    }

    printf("\nRoma rakamlarina çevrilmis hali: ");
    for (int i = 0; i < strlen(mesaj); i++) {
        switch (mesaj[i]) {
            case '0': printf("nulla "); break;
            case '1': printf("I "); break;
            case '2': printf("II "); break;
            case '3': printf("III "); break;
            case '4': printf("IV "); break;
            case '5': printf("V "); break;
            case '6': printf("VI "); break;
            case '7': printf("VII "); break;
            case '8': printf("VIII "); break;
            case '9': printf("IX "); break;
            case '10': printf("X "); break;
            case '11': printf("XI "); break;
            case '12': printf("XII "); break;
            case '13': printf("XIII "); break;
            case '14': printf("XIV "); break;
            case '15': printf("XV "); break;
            case '16': printf("XVI "); break;
            case '17': printf("XVII "); break;
            case '18': printf("XVIII "); break;
            case '19': printf("XIX "); break;
            case '20': printf("XX "); break;
            default: printf("%c ", mesaj[i]);
        }
    }

    return 0;
}

