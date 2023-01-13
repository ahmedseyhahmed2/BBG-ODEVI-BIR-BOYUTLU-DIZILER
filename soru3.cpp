#include <stdio.h>
#include <math.h>

#define MAX_ELEMENTS 100

int main(void) {
  int n, i, a[MAX_ELEMENTS], b[MAX_ELEMENTS], c[MAX_ELEMENTS];
  float scalar_product = 0;

  printf("Dizinin eleman sayisini girin: ");
  scanf("%d", &n);

  printf("A dizisinin elemanlarini girin: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    b[i] = a[i] * a[i];
    c[i] = sqrt(a[i]);
  }

  for (i = 0; i < n; i++) {
    scalar_product += b[i] * c[i];
  }

  printf("B dizisi: {");
  for (i = 0; i < n; i++) {
    printf("%d", b[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("}\n");

  printf("C dizisi: {");
  for (i = 0; i < n; i++) {
    printf("%d", c[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("}\n");

  printf("Scaler çarpim: %.2f\n", scalar_product);

  return 0;
}

