#include <stdio.h>
#include <string.h>

int main(void) {
  char metin[1000];  // Girilen metni tutacak dizi
  printf("Bir metin girin: ");
  gets(metin);  // Metni klavyeden al

  int uzunluk = strlen(metin);  // Metnin uzunlugunu bul
  int sayac = 0;  // �zel karakter sayisini tutacak saya�

  // Metni karakter karakter tarayalim
  for (int i = 0; i < uzunluk; i++) {
    // Eger metinde bir �zel karakter varsa, saya� degerini arttir
    if (!((metin[i] >= 'a' && metin[i] <= 'z') || (metin[i] >= 'A' && metin[i] <= 'Z') || (metin[i] >= '0' && metin[i] <= '9'))) {
      sayac++;
    }
  }

  // �zel karakter sayisini yazdir
  printf("Girilen metin icinde %d tane ozel karakter var.\n", sayac);

  return 0;
}

