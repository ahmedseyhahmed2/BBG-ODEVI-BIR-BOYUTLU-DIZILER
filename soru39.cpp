#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 16 tabanindaki karakterleri tutan dizi
char hex_characters[] = "0123456789ABCDEF";

int main() {
  int number;

  printf("Lütfen pozitif tamsayi giriniz: ");
  scanf("%d", &number);

  // Girilen tamsayi sifirdan küçükse, programi sonlandir.
  if (number < 0) {
    printf("Girilen sayi sifirdan küçük olamaz.\n");
    return 1;
  }

  char hex_string[100];
  int i = 0;

  // Girilen tamsayi 16 tabanina dönüstürülür ve hex_string dizisine yazilir.
  while (number > 0) {
    hex_string[i] = hex_characters[number % 16];
    number /= 16;
    i++;
  }

  // Dönüstürülen sayi, ters yazilmis olarak hex_string dizisinde tutulur.
  // Bu yüzden, dizinin elemanlari ters çevirilerek ekrana yazdirilir.
  for (int j = i - 1; j >= 0; j--) {
    printf("%c", hex_string[j]);
  }
  printf("\n");

  return 0;
}

