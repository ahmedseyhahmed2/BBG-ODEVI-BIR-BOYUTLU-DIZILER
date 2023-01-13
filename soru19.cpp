#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char cumle[1000];  // Girilen c�mleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(cumle);  // C�mleyi klavyeden al

  int uzunluk = strlen(cumle);  // C�mlenin uzunlugunu bul

  // C�mlenin kelime kelime taranmasi
  for (int i = 0; i < uzunluk; i++) {
    // Eger kelimenin ilk harfi bulunduysa, o harfi b�y�t
    if (i == 0 || isspace(cumle[i - 1])) {
      cumle[i] = toupper(cumle[i]);
    }
  }

  // B�y�t�lm�s c�mleyi yazdir
  printf("Cumle: %s\n", cumle);

  return 0;
}

