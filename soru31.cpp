#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  printf("bir cumle giriniz: ");
  gets(str); // klavyeden girilen c�mleyi oku
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
      printf("%c ", str[i]); // noktalama isareti i�in bosluk yaz
    } else {
      printf("%c", str[i]); // diger karakterler i�in bosluk yazma
    }
  }
  printf("\n"); // yeni satira ge�
  return 0;
}

