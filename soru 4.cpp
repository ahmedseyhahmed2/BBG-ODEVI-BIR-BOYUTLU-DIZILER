#include <stdio.h>

#define MAX_ELEMENTS 100

int main(void) {
  int n, i, a[MAX_ELEMENTS], b[MAX_ELEMENTS];

  printf("Dizinin eleman sayisini girin: ");
  scanf("%d", &n);

  printf("A dizisinin elemanlarini girin: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++) {
    b[i] = a[n - i - 1];
  }

  printf("B dizisi: {");
  for (i = 0; i < n; i++) {
    printf("%d", b[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("}\n");

  return 0;
}

