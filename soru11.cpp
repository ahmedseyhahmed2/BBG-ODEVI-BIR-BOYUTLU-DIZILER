#include <stdio.h>
#include <string.h>
#include <unistd.h>  // sleep() fonksiyonunu kullanmak için gerekli olan baslik

int main(void) {
  char s[100];  // Girilen cümleyi tutacak dizi
  printf("Bir cümle girin: ");
  gets(s);  // Cümleyi klavyeden al

  int uzunluk = strlen(s);  // Cümlenin uzunlugunu bul

  // Mavi zemin üzerine sari ile yaz
  printf("\033[44m\033[33m");

  // Cümlenin her harfini 1 s araliklarla kirmiziya dönüstür
  for (int i = 0; i < uzunluk; i++) {
    printf("%c", s[i]);
    fflush(stdout);  // Çiktiyi terminal ekranina yaz
    sleep(1);  // 1 s bekle
    printf("\033[31m");  // Yazi rengini kirmiziya dönüstür
  }

  printf("\033[0m");  // Öntanimli renkleri kullanmaya geri dön

  return 0;
}

