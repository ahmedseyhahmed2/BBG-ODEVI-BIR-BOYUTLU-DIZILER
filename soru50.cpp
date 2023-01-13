#include <stdio.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 100

void decode(char *codedMessage, char *decodedMessage) {
  // Kod çözme islemleri burada yapilir
  // Örnegin, kodun her karakterinin bir anahtar deger ile çarpilip
  // sonucun alfabedeki karsiligi alinabilir
  strcpy(decodedMessage, "Çozulmus mesaj");
}

int main() {
  char codedMessage[MAX_MESSAGE_LENGTH + 1];
  char decodedMessage[MAX_MESSAGE_LENGTH + 1];

  printf("Lutfen kodlanmis mesaji giriniz: ");
  scanf("%s", codedMessage);

  decode(codedMessage, decodedMessage);

  printf("cozulmus mesaj: %s\n", decodedMessage);

  return 0;
}

