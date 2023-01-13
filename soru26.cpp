#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen cümle
  printf("Cumle girin: ");
  gets(cumle);  // Cümleyi klavyeden al

  char kelime[100];  // Cümleden çikartilacak kelime
  char yeni_cumle[1000] = "";  // Yeni cümle
  int uzunluk = strlen(cumle);
  // Cümleden kelime çikart
  for (int i = uzunluk - 1; i >= 0; i--) {
    // Eger bosluk karakterine ulasildiysa, çikartilan kelimeyi tersten ekle
    if (cumle[i] == ' ') {
      // Çikartilan kelimeyi tersten ekle
      for (int j = strlen(kelime) - 1; j >= 0; j--) {
        strncat(yeni_cumle, &kelime[j], 1);
      }
      // Yeni cümle sonuna bosluk ekle
      strcat(yeni_cumle, " ");
      // Çikartilan kelimeyi sifirla
      strcpy(kelime, "");
    }
    // Kelaime ekle
    else {
      strncat(kelime, &cumle[i], 1);
    }
  }
  // Son çikartilan kelimeyi de tersten ekle
  for (int j = strlen(kelime) - 1; j >= 0; j--) {
    strncat(yeni_cumle, &kelime[j], 1);
  }

  printf("Yeni cümle: %s\n", yeni_cumle);

  return 0;
}

