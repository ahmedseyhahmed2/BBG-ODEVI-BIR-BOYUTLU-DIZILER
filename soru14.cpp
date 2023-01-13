#include <stdio.h>

int main() {
    char kelime[50];
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);

    int i;
    for (i = 0; kelime[i] != '\0'; i++) {
        printf("%c\n", kelime[i]);
    }
    return 0;
}

