#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen cümle
  printf("Cümle girin: ");
  gets(cumle);  // Cümleyi klavyeden al

  char en_uzun_kelime[100] = "";  // En uzun kelime
  char en_kisa_kelime[100] = "";  // En kisa kelime
  char kelime[100];  // Cümleden çikartilacak kelime
  int uzunluk = strlen(cumle);
  // Cümleden kelime çikart
  for (int i = 0; i < uzunluk; i++) {
    // Eger bosluk karakterine ulasildiysa, en uzun ve en kisa kelimeyi güncelle
    if (cumle[i] == ' ') {
      if (strlen(kelime) > strlen(en_uzun_kelime)) {
        strcpy(en_uzun_kelime, kelime);
      }
      if (strlen(kelime) < strlen(en_kisa_kelime) || strlen(en_kisa_kelime) == 0) {
        strcpy(en_kisa_kelime, kelime);
      }
      // Çikartilan kelimeyi sifirla
      strcpy(kelime, "");
    }
    // Kelaime ekle
    else {
      strncat(kelime, &cumle[i], 1);
    }
  }
  // Son çikartilan kelimeyi de kontrol et
  if (strlen(kelime) > strlen(en_uzun_kelime)) {
    strcpy(en_uzun_kelime, kelime);
  }
  if (strlen(kelime) < strlen(en_kisa_kelime) || strlen(en_kisa_kelime) == 0) {
    strcpy(en_kisa_kelime, kelime);
  }

  // Farki hesapla ve yazdir
  int fark = strlen(en_uzun_kelime) - strlen(en_

