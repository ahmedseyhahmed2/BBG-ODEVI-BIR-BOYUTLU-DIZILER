#include <stdio.h>
#include <string.h>

int main() {
    char morse[100];
    printf("Morse koduyla kodlanmis bir mesaj girin: ");
    fgets(morse, 100, stdin);

    printf("�ozulmus mesaj: ");
    for (int i = 0; i < strlen(morse); i++) {
        if (morse[i] == '.') {
            printf("E");
        } else if (morse[i] == '-') {
            printf("T");
        } else if (morse[i] == ' ') {
            printf(" ");
        } else {
            printf("%c", morse[i]);
        }
    }

    return 0;
}

