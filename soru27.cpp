#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen cümle
  printf("Cümle girin: ");
  gets(cumle);  // Cümleyi klavyeden al

  char en_uzun_kelime[100] = "";  // En uzun kelime
  char kelime[100];  // Cümleden çikartilacak kelime
  int uzunluk = strlen(cumle);
  // Cümleden kelime çikart
  for (int i = 0; i < uzunluk; i++) {
    // Eger bosluk karakterine ulasildiysa, en uzun kelimeyi güncelle
    if (cumle[i] == ' ') {
      if (strlen(kelime) > strlen(en_uzun_kelime)) {
        strcpy(en_uzun_kelime, kelime);
      }
      // Çikartilan kelimeyi sifirla
      strcpy(kelime, "");
    }
    // Kelaime ekle
    else {
      strncat(kelime, &cumle[i], 1);
    }
  }
  // Son

