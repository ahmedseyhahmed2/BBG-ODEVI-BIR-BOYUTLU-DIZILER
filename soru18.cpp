#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

int main() {
    char mesaj[100];
    printf("Mesaji giriniz: ");
    scanf("%s", mesaj);

    int uzunluk = strlen(mesaj);
    int i;
    while (1) {
        for (i = 0; i < uzunluk; i++) {
            printf("%c", toupper(mesaj[i]));
            fflush(stdout);
            sleep(1);
            printf("\b");
            fflush(stdout);
            sleep(1);
            printf("%c", tolower(mesaj[i]));
            fflush(stdout);
            sleep(1);
            printf("\b");
            fflush(stdout);
        }
    }
    return 0;
}

