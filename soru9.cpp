#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100];  // Girilen c�mleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(s);  // C�mleyi klavyeden al

  int uzunluk = strlen(s);  // C�mlenin uzunlugunu bul
  for (int i = 0; i < uzunluk; i++) {
    // C�mledeki her karakteri ikiser tane yaz
    printf("%c%c", s[i], s[i]);
  }

  return 0;
}

