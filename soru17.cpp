#include <stdio.h>

int main() {
    int n;
    printf("Matrisin boyutunu giriniz (n*n): ");
    scanf("%d", &n);

    int matris[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matris[i][j] = 0;
        }
    }

    printf("Sifirlardan olusan matris: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}

