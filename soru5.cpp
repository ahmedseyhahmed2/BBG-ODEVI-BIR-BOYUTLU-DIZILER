#include <stdio.h>

#define MAX_ELEMENTS 100

int main(void) {
  int n, i, a[MAX_ELEMENTS];

  printf("Dizinin eleman sayisini girin: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a[i] = 0;
    } else {
      a[i] = 1;
    }
  }

  printf("A dizisi: {");
  for (i = 0; i < n; i++) {
    printf("%d", a[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("}\n");

  return 0;
}

