#include <stdio.h>

int main(void) {
  int sayi;  // Girilen sayi
  printf("Pozitif tamsayi girin: ");
  scanf("%d", &sayi);  // Sayiyi klavyeden al

  int basamak_sayisi = 0;  // Sayinin basamak sayisi
  // Sayinin basamak sayisini bul
  while (sayi > 0) {
    basamak_sayisi++;
    sayi /= 10;
  }

  // Basamakli en büyük tamsayi: 99999... (basamak sayisi kadar)
  int en_buyuk = 0;
  for (int i = 0; i < basamak_sayisi; i++) {
    en_buyuk = en_buyuk * 10 + 9;
  }

  // Basamakli en küçük tamsayi: 100... (basamak sayisi kadar)
  int en_kucuk = 1;
  for (int i = 0; i < basamak_sayisi - 1; i++) {
    en_kucuk = en_kucuk * 10;
  }

  // Farki hesapla
  int fark = en_buyuk - en_kucuk;
  printf("Basamakli en buyuk tamsayi: %d\n", en_buyuk);
  printf("Basamakli en kucuk tamsayi: %d\n", en_kucuk);
  printf("Fark: %d\n", fark);

  return 0;
}

