#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(void) {
  char sentence[MAX_LENGTH], word[MAX_LENGTH];
  int i, j, k, count = 0;

  printf("Cumleyi girin: ");
  scanf("%[^\n]", sentence);

  printf("Aranacak kelimeyi girin: ");
  scanf("%s", word);

  for (i = 0; sentence[i] != '\0'; i++) {
    for (j = i, k = 0; sentence[j] == word[k]; j++, k++) {
      if (word[k + 1] == '\0') {
        count++;
        break;
      }
    }
  }

  printf("'%s' kelimesi cumlede %d kez geciyor.\n", word, count);

  return 0;
}

