#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main(void) {
  char sentence[MAX_LENGTH];
  int i;

  printf("Cumleyi girin: ");
  scanf("%[^\n]", sentence);

  for (i = 0; sentence[i] != '\0'; i++) {
    if (i == 0 || isspace(sentence[i - 1])) {
      putchar(toupper(sentence[i]));
    } else {
      putchar(sentence[i]);
    }
  }

  putchar('\n');

  return 0;
}

