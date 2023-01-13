#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Kullanicidan alinan karakter dizisi
    printf("Lutfen bir karakter dizisi girin: ");
    scanf("%s", str); // Karakter dizisini al

    int length = strlen(str); // Karakter dizisinin uzunlugunu bul

    // Karakter dizisinin her bir elemanini döngü ile gez
    for (int i = 0; i < length; i++) {
        // Her bir karakterin ASCII kodunu bul ve 8 tabaninda yaz
        printf("%o ", str[i]);
    }

    return 0;
}

