#include <stdio.h>

int main(void) {
  int a, b;  // Girilecek tamsayilar
  printf("Iki pozitif tamsayi girin: ");
  scanf("%d %d", &a, &b);

  int ortalama_turu;  // Kullanicinin seçecegi ortalama türü
  printf("Hangi ortalama türünü kullanmak istersiniz?\n");
  printf("1. Arithmetic mean (ortalama)\n");
  printf("2. Harmonic mean (harmonik ortalama)\n");
  printf("3. Geometric mean (geometrik ortalama)\n");
  printf("4. Quadratic mean (karesel ortalama)\n");
  printf("Lütfen bir tamsayi girin: ");
  scanf("%d", &ortalama_turu);

  // Istenen ortalama türüne göre ortalamayi hesapla
  float ortalama;
  if (ortalama_turu == 1) {
    ortalama = (float) (a + b) / 2;
  } else if (ortalama_turu == 2) {
    ortalama = 2 / ((1 / (float) a) + (1 / (float) b));
  } else if (ortalama_turu == 3) {
    ortalama = sqrt((float) (a * b));
  } else if (ortalama_turu == 4) {
    ortalama = sqrt(((float) a * a + (float) b * b) / 2);
  } else {
    printf("Geçersiz ortalama türü seçildi.\n");
    return 1;
  }

  // Ortalamayi yazdir
  printf("Seçilen ortalama türü: %d\n", ortalama_turu);
  printf("Ortalama: %.2f\n", ortalama);

  return 0;
}

