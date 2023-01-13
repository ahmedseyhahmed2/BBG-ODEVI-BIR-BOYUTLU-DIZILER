#include <stdio.h>
#include <string.h>

int main(void) {
  char ondalik[100];  // Girilen ondalik sayiyi tutacak dizi
  printf("Ondalik sayi girin: ");
  gets(ondalik);  // Ondalik sayiyi klavyeden al

  int uzunluk = strlen(ondalik);  // Ondalik sayinin uzunlugunu bul

  // Ondalik sayinin virgülünü nokta olarak degistir
  for (int i = 0; i < uzunluk; i++) {
    if (ondalik[i] == ',') {
      ondalik[i] = '.';
      break;
    }
  }

  // Düzeltilmis ondalik sayiyi yazdir
  printf("Duzeltilmis ondalik sayi: %s\n", ondalik);

  return 0;
}

