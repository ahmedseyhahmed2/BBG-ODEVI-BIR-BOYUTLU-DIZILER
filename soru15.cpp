#include <stdio.h>
#include <string.h>

int main(void) {
  int gun, ay;  // Dogum tarihinin gün ve ay degerlerini tutacak degiskenler
  printf("Dogum tarihinizi girin (gün ay seklinde): ");
  scanf("%d %d", &gun, &ay);  // Dogum tarihini klavyeden al

  // Kisinin burcunu bul
  if ((ay == 3 && gun >= 21) || (ay == 4 && gun <= 20)) {
    printf("Burcunuz: Koç\n");
  } else if ((ay == 4 && gun >= 21) || (ay == 5 && gun <= 21)) {
    printf("Burcunuz: Boga\n");
  } else if ((ay == 5 && gun >= 22) || (ay == 6 &&

