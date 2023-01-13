#include <stdio.h>
#include <string.h>

#define MAX_KELIME_SAYISI 100  // Cümledeki en fazla kelime sayisi

// Kelimeleri siralayan fonksiyon
void kelime_sirala(char c[][100], int n) {
  // Kelimeleri siralamak için seçim siralamasi kullanilir
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      // Eger kelime[i] kelime[j]'den daha uzunsa, kelimeleri yer degistir
      if (strlen(c[i]) > strlen(c[j])) {
        char temp[100];
        strcpy(temp, c[i]);
        strcpy(c[i], c[j]);
        strcpy(c[j], temp);
      }
    }
  }
}

int main(void) {
  char cumle[1000];  // Girilen cümleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(cumle);  // Cümleyi klavyeden al

  // Cümlenin kelime kelime ayrilmasi
  char kelime[MAX_KELIME_SAYISI][100];
  int kelime_sayisi = 0;  // Cümlenin kelime sayisi
  int uzunluk = strlen(cumle);
  int j = 0;
  for (int i = 0; i <= uzunluk; i++) {
    // Eger kelime bitis karakterine (bosluk veya son) ulasildiysa, kelimeyi al ve kelime sayisini arttir
    if (cumle[i] == ' ' || cumle[i] == '\0') {
      kelime[kelime_sayisi][j] = '\0';  // Kelimenin sonuna null karakteri ekle
      kelime_sayisi++;
      j = 0;
    } else {
      // Kelimenin bir harfini al
      kelime[kelime_sayisi][j] = cumle[i];
      j++;
    }
  }

  // Kelimeleri sirala
  kelime_sirala(kelime, kelime_sayisi);

  // Siralanmis kelimeleri yazdir
  printf("Siralanmis kelimeler:\n");
  for (int i = 0; i < kelime_sayisi; i++) {
    printf("%s\n", kelime[i]);
  }

  return 0;
}

