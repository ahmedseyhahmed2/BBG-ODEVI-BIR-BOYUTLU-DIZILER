#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  printf("bir cumle giriniz : ");
  gets(str); // klavyeden girilen c�mleyi oku
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == ' ') {
      printf("***"); // kelime aralari i�in "***" yaz
    } else {
      printf("%c", str[i]); // diger karakterleri yaz
    }
  }
  printf("\n"); // yeni satira ge�
  return 0;
}

