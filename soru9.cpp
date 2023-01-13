#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100];  // Girilen cümleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(s);  // Cümleyi klavyeden al

  int uzunluk = strlen(s);  // Cümlenin uzunlugunu bul
  for (int i = 0; i < uzunluk; i++) {
    // Cümledeki her karakteri ikiser tane yaz
    printf("%c%c", s[i], s[i]);
  }

  return 0;
}

