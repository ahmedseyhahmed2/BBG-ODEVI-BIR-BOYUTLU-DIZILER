#include <stdio.h>

int main() {
    int n;
    printf("Matrisin boyutunu giriniz (n*n): ");
    scanf("%d", &n);

    int matris[n][n];
    int i, j;

    // Matrisi kullanici tarafindan gir
    printf("Matrisi giriniz: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Matrisi dikey olarak çevir
    for (i = 0; i < n; i++) {
        for (j = 0; j < n / 2; j++) {
            int temp = matris[i][j];
            matris[i][j] = matris[i][n - j - 1];
            matris[i][n - j - 1] = temp;
        }
    }

    // Çevrilmis matrisi yazdir
    printf("Cevrilmis matris: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}

