#include <stdio.h>

int main(void) {
  int sayi;  // Girilen sayi
  printf("Pozitif tamsayi girin: ");
  scanf("%d", &sayi);  // Sayiyi klavyeden al

  printf("Bolenler:\n");
  // T�m sayilar i�in kontrol et
  for (int i = 1; i <= sayi; i++) {
    // Eger sayi i b�len ise, yazdir
    if (sayi % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}

