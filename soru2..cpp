#include <stdio.h>
#include <stdlib.h>

#define MAX_ELEMENTS 100

int compare(const void *a, const void *b) {
  return *(int *)b - *(int *)a;
}

int main(void) {
  int n, i, a[MAX_ELEMENTS], b[MAX_ELEMENTS], c[MAX_ELEMENTS], d[MAX_ELEMENTS];

  printf("Dizinin eleman sayisini girin: ");
  scanf("%d", &n);

  printf("A dizisinin elemanlarini girin: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  printf("B dizisinin elemanlarini girin: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  printf("C dizisinin elemanlarini girin: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &c[i]);
  }

  for (i = 0; i < n; i++) {
    d[i] = a[i] + b[i] - c[i];
  }

  qsort(d, n, sizeof(int), compare);

  printf("D dizisi: {");
  for (i = 0; i < n; i++) {
    printf("%d", d[i]);
    if (i < n - 1) {
      printf(", ");
    }
  }
  printf("}\n");

  return 0;
}

