#include <stdio.h>
#include <string.h>

int main() {
    char mesaj[100];
    printf("Lutfen kodlamak istediginiz mesaji giriniz: ");
    gets(mesaj);  // klavyeden metni al
    int uzunluk = strlen(mesaj);  // metnin uzunlugunu bul
    printf("Kodlanmis mesaj: ");
    for (int i = 0; i < uzunluk; i++) {
        char karakter = mesaj[i];
        if (karakter >= 'A' && karakter <= 'Z') {
            // Eger harf buyuk harf ise, ITA1 kodlamasina gore kodlar
            char kod = karakter - 'A' + '!';
            printf("%c", kod);
        } else if (karakter >= 'a' && karakter <= 'z') {
            // Eger harf kucuk harf ise, ITA1 kodlamasina gore kodlar
            char kod = karakter - 'a' + '^';
            printf("%c", kod);
        } else {
            // Eger harf degilse, direkt yazdir
            printf("%c", karakter);
        }
    }
    printf("\n");  // satiri sonlandir
    return 0;
}

