#include <stdio.h>
#include <string.h>

int main(void) {
  char s[1000];  // Girilen cümleyi tutacak dizi
  printf("Bir cumle girin: ");
  gets(s);  // Cümleyi klavyeden al

  int uzunluk = strlen(s);  // Cümlenin uzunlugunu bul
  int sayac = 0;  // "a" ile biten kelime sayisini tutacak sayaç

  // Cümleyi karakter karakter tarayalim
  for (int i = 0; i < uzunluk; i++) {
    // Eger cümlede "a" ile biten bir kelime varsa, sayaç degerini arttir
    if (s[i] == 'a' && (s[i + 1] == ' ' || s[i + 1] == '\0')) {
      sayac++;
    }
  }

  // "a" ile biten kelime sayisini yazdir
  printf("Girilen cumlede %d tane \"a\" ile biten kelime var.\n", sayac);

  return 0;
}

