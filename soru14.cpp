#include <stdio.h>
#include <string.h>

int main(void) {
  int gun, ay, yil;  // Dogum tarihinin gün, ay ve yil degerlerini tutacak degiskenler
  printf("Dogum tarihinizi girin (gun ay yil seklinde): ");
  scanf("%d %d %d", &gun, &ay, &yil);  // Dogum tarihini klavyeden al

  // Ay adini bul
  char *ay_adi;
  if (ay == 1) {
    ay_adi = "ocak";
  } else if (ay == 2) {
    ay_adi = "subat";
  } else if (ay == 3) {
    ay_adi = "mart";
  } else if (ay == 4) {
    ay_adi = "nisan";
  } else if (ay == 5) {
    ay_adi = "mayis";
  } else if (ay == 6) {
    ay_adi = "haziran";
  } else if (ay == 7) {
    ay_adi = "temmuz";
  } else if (ay == 8) {
    ay_adi = "agustos";
  } else if (ay == 9) {
    ay_adi = "eylül";
  } else if (ay == 10) {
    ay_adi = "ekim";
  } else if (ay == 11) {
    ay_adi = "kasim";
  } else if (ay == 12) {
    ay_adi = "aralik";
  } else {
    ay_adi = "bilinmeyen";
  }

  // Dogum tarihini kelimelerle yazdir
  printf("Dogum tarihiniz: %d %s %d\n", gun, ay_adi, yil);

  return 0;
}

