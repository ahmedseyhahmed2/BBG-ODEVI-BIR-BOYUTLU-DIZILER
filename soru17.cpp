#include <stdio.h>

int main(void) {
  int n;  // Dizinin eleman sayisi
  printf("Dizinin eleman sayisini girin: ");
  scanf("%d", &n);

  int dizi[n];  // Dizi
  int agirliklar[n];  // Dizinin elemanlarinin agirliklari

  // Dizi ve agirliklar dizisini klavyeden al
  printf("Dizinin elemanlarini girin: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &dizi[i]);
  }
  printf("Dizinin elemanlarinin agirliklarini girin: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &agirliklar[i]);
  }

  // Agirlikli ortalamayi hesapla
  int toplam_agirlik = 0;  // Agirliklarin toplami
  int toplam = 0;  // Dizinin elemanlarinin agirliklariyla çarpiminin toplami
  for (int i = 0; i < n; i++) {
    toplam_agirlik += agirliklar[i];
    toplam += dizi[i] * agirliklar[i];
  }
  float agirlikli_ortalama = (float) toplam / toplam_agirlik;  // Agirlikli ortalama

  // Agirlikli ortalamayi yazdir
  printf("Agirlikli ortalama: %.2f\n", agirlikli_ortalama);

  return 0;
}

