#include <stdio.h>

int main(void) {
  int sayi;  // Girilen sayi
  printf("Pozitif tamsayi girin: ");
  scanf("%d", &sayi);  // Sayiyi klavyeden al

  printf("Bolenler:\n");
  // Tüm sayilar için kontrol et
  for (int i = 1; i <= sayi; i++) {
    // Eger sayi i bölen ise, yazdir
    if (sayi % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}

