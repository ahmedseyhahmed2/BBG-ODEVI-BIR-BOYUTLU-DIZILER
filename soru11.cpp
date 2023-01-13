#include <stdio.h>
#include <string.h>
#include <unistd.h>  // sleep() fonksiyonunu kullanmak i�in gerekli olan baslik

int main(void) {
  char s[100];  // Girilen c�mleyi tutacak dizi
  printf("Bir c�mle girin: ");
  gets(s);  // C�mleyi klavyeden al

  int uzunluk = strlen(s);  // C�mlenin uzunlugunu bul

  // Mavi zemin �zerine sari ile yaz
  printf("\033[44m\033[33m");

  // C�mlenin her harfini 1 s araliklarla kirmiziya d�n�st�r
  for (int i = 0; i < uzunluk; i++) {
    printf("%c", s[i]);
    fflush(stdout);  // �iktiyi terminal ekranina yaz
    sleep(1);  // 1 s bekle
    printf("\033[31m");  // Yazi rengini kirmiziya d�n�st�r
  }

  printf("\033[0m");  // �ntanimli renkleri kullanmaya geri d�n

  return 0;
}

