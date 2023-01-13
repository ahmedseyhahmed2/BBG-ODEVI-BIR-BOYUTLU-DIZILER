#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char kelime[50];
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);

    int uzunluk = strlen(kelime);
    int yarisi = uzunluk / 2;
    int i, j;
    for (i = 0; i < yarisi; i++) {
        printf("\033[%d;%dH%c", 12 - i, 40 - (yarisi / 2) + i, kelime[i]);
        fflush(stdout); 
        sleep(1);
    }
    for (j = yarisi; j < uzunluk; j++) {
        printf("\033[%d;%dH%c", 12 + (j - yarisi), 40 - (uzunluk - yarisi) / 2 + j, kelime[j]);
        fflush(stdout); 
        sleep(1);
    }
    return 0;
}

