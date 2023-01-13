#include <stdio.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 100

void decodeHollerith(char *codedMessage, char *decodedMessage) {
  // Hollerith kodunun ��z�lme islemleri burada yapilir
  // �rnegin, kodun her karakteri taranir ve ka� tane oldugu g�steren
  // sayi okunarak, o karakterin kendisi decodedMessage dizisine eklenir
  strcpy(decodedMessage, "��z�lm�s mesaj");
}

int main() {
  char codedMessage[MAX_MESSAGE_LENGTH * 2 + 1]; // Kodlanmis mesajin uzunlugu aslindan daha uzun olabilir
  char decodedMessage[MAX_MESSAGE_LENGTH + 1];

  printf("Lutfen kodlanmis mesaji giriniz: ");
  scanf("%s", codedMessage);

  decodeHollerith(codedMessage, decodedMessage);

  printf("�ozulmus mesaj: %s\n", decodedMessage);

  return 0;
}

