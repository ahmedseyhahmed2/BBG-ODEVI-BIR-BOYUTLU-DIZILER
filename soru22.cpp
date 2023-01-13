#include <stdio.h>
#include <math.h>

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

  printf("Basamak sayisi: %d\n", basamak_sayisi);

  return 0;
}

