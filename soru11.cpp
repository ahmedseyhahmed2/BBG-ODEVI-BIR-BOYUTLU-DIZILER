#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>

int main() {
    char mesaj[50];
    printf("Mesaji giriniz: ");
    scanf("%s", mesaj);

    int i;
    srand(time(0));
    for (i = 0; i < strlen(mesaj); i++) {
        int r = rand() % 2;
        char harf = mesaj[i];
        int r2 = rand() % 7 + 31;  //random renk
        printf("\033[1;%dm%c", r2, harf);
        fflush(stdout); 
        sleep(1);
        printf("\033[0m\n"); //renk kapat
    }
    return 0;
}

