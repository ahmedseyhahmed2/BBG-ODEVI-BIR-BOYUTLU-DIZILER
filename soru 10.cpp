#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char kelime[50];
    printf("Kelimeyi giriniz: ");
    scanf("%s", kelime);

    int i;
    srand(time(0));
    for (i = 0; kelime[i] != '\0'; i++) {
        int r = rand() % 2;
        if (r == 1)
            printf("%c", kelime[i]);
        else
            printf("%c", kelime[i] + ('a' - 'A'));  // harfleri buyuk yap
    }
    return 0;
}

