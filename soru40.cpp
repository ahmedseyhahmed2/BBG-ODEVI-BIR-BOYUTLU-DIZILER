#include <stdio.h>
#include <string.h>

int main() {
  char message[100];

  printf("Lütfen mesajinizi giriniz: ");
  scanf("%[^\n]s", message);

  int length = strlen(message);

  for (int i = 0; i < length; i++) {
    printf("%d ", message[i]);
  }
  printf("\n");

  return 0;
}

