#include <stdio.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 100

void encodeHollerith(char *message, char *encodedMessage) {
  // Hollerith kodu olusturma islemleri burada yapilir
  // Örnegin, her karakterin kodunun kendinden sonra
  // kaç tane oldugunu gösteren bir sayi eklenerek olusturulabilir
  strcpy(encodedMessage, "Kodlanmis mesaj");
}

int main() {
  char message[MAX_MESSAGE_LENGTH + 1];
  char encodedMessage[MAX_MESSAGE_LENGTH * 2 + 1]; // Kodlanmis mesajin uzunlugu aslindan daha uzun olabilir

  printf("Lutfen mesaji giriniz: ");
  scanf("%s", message);

  encodeHollerith(message, encodedMessage);

  printf("Kodlanmis mesaj: %s\n", encodedMessage);

  return 0;
}

