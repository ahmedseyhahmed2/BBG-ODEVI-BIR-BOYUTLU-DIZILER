#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen c�mle
  printf("Cumle girin: ");
  gets(cumle);  // C�mleyi klavyeden al

  char kelime[100];  // C�mleden �ikartilacak kelime
  char yeni_cumle[1000] = "";  // Yeni c�mle
  int uzunluk = strlen(cumle);
  // C�mleden kelime �ikart
  for (int i = uzunluk - 1; i >= 0; i--) {
    // Eger bosluk karakterine ulasildiysa, �ikartilan kelimeyi tersten ekle
    if (cumle[i] == ' ') {
      // �ikartilan kelimeyi tersten ekle
      for (int j = strlen(kelime) - 1; j >= 0; j--) {
        strncat(yeni_cumle, &kelime[j], 1);
      }
      // Yeni c�mle sonuna bosluk ekle
      strcat(yeni_cumle, " ");
      // �ikartilan kelimeyi sifirla
      strcpy(kelime, "");
    }
    // Kelaime ekle
    else {
      strncat(kelime, &cumle[i], 1);
    }
  }
  // Son �ikartilan kelimeyi de tersten ekle
  for (int j = strlen(kelime) - 1; j >= 0; j--) {
    strncat(yeni_cumle, &kelime[j], 1);
  }

  printf("Yeni c�mle: %s\n", yeni_cumle);

  return 0;
}

