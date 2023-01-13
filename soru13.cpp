#include <stdio.h>
#include <string.h>

int main(void) {
  char ay[20];  // Girilen ay adini tutacak dizi
  printf("Bir ay adi girin: ");
  scanf("%s", ay);  // Ay adini klavyeden al

  // Ay adina göre, yilin kaçinci ayi oldugunu bul
  if (strcmp(ay, "ocak") == 0) {
    printf("Girilen ay, yilin 1. ayidir.\n");
  } else if (strcmp(ay, "subat") == 0) {
    printf("Girilen ay, yilin 2. ayidir.\n");
  } else if (strcmp(ay, "mart") == 0) {
    printf("Girilen ay, yilin 3. ayidir.\n");
  } else if (strcmp(ay, "nisan") == 0) {
    printf("Girilen ay, yilin 4. ayidir.\n");
  } else if (strcmp(ay, "mayis") == 0) {
    printf("Girilen ay, yilin 5. ayidir.\n");
  } else if (strcmp(ay, "haziran") == 0) {
    printf("Girilen ay, yilin 6. ayidir.\n");
  } else if (strcmp(ay, "temmuz") == 0) {
    printf("Girilen ay, yilin 7. ayidir.\n");
  } else if (strcmp(ay, "agustos") == 0) {
    printf("Girilen ay, yilin 8. ayidir.\n");
  } else if (strcmp(ay, "eylül") == 0) {
    printf("Girilen ay, yilin 9. ayidir.\n");
  } else if (strcmp(ay, "ekim") == 0) {
    printf("Girilen ay, yilin 10. ayidir.\n");
  } else if (strcmp(ay, "kasim") == 0) {
    printf("Girilen ay, yilin 11. ayidir.\n");
  } else if (strcmp(ay, "aralik") == 0) {
    printf("Girilen ay, yilin 12. ayidir.\n");
  } else {
    printf("Girilen ay adi geçersiz. Lütfen geçerli bir ay adi girin.\n");
  }

  return 0;
}

