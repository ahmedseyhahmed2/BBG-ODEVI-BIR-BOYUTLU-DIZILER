#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char cumle[1000];  // Girilen cümleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(cumle);  // Cümleyi klavyeden al

  int uzunluk = strlen(cumle);  // Cümlenin uzunlugunu bul

  // Cümlenin kelime kelime taranmasi
  for (int i = 0; i < uzunluk; i++) {
    // Eger kelimenin ilk harfi bulunduysa, o harfi büyüt
    if (i == 0 || isspace(cumle[i - 1])) {
      cumle[i] = toupper(cumle[i]);
    }
  }

  // Büyütülmüs cümleyi yazdir
  printf("Cumle: %s\n", cumle);

  return 0;
}

