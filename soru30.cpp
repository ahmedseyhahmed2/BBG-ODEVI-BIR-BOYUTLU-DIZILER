#include <stdio.h>
#include <string.h>

int main(void) {
  char cumle[1000];  // Girilen c�mle
  printf("Cumle girin: ");
  gets(cumle);  // C�mleyi klavyeden al

  int noktalama_sayisi = 0;  // Noktalama isareti sayisi
  int uzunluk = strlen(cumle);
  // C�mleden noktalama isaretlerini say
  for (int i = 0; i < uzunluk; i++) {
    if (cumle[i] == '.' || cumle[i] == '?' || cumle[i] == '!') {
      noktalama_sayisi++;
    }
  }

  printf("Noktalama isareti sayisi: %d\n", noktalama_sayisi);

  return 0;
}

