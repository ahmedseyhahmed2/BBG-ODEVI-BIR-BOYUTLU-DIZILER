#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen c�mle
  printf("C�mle girin: ");
  gets(cumle);  // C�mleyi klavyeden al

  char en_uzun_kelime[100] = "";  // En uzun kelime
  char kelime[100];  // C�mleden �ikartilacak kelime
  int uzunluk = strlen(cumle);
  // C�mleden kelime �ikart
  for (int i = 0; i < uzunluk; i++) {
    // Eger bosluk karakterine ulasildiysa, en uzun kelimeyi g�ncelle
    if (cumle[i] == ' ') {
      if (strlen(kelime) > strlen(en_uzun_kelime)) {
        strcpy(en_uzun_kelime, kelime);
      }
      // �ikartilan kelimeyi sifirla
      strcpy(kelime, "");
    }
    // Kelaime ekle
    else {
      strncat(kelime, &cumle[i], 1);
    }
  }
  // Son

