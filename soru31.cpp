#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  printf("bir cumle giriniz: ");
  gets(str); // klavyeden girilen cümleyi oku
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
      printf("%c ", str[i]); // noktalama isareti için bosluk yaz
    } else {
      printf("%c", str[i]); // diger karakterler için bosluk yazma
    }
  }
  printf("\n"); // yeni satira geç
  return 0;
}

