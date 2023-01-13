#include <stdio.h>

int main() {
    int m, n;
    printf("Matrisin boyutunu giriniz (m*n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    int B[m];
    int i, j;

    // Matrisi kullanici tarafindan gir
    printf("Matrisi giriniz: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Her satir için negatif degerleri say
    for (i = 0; i < m; i++) {
        int negatif_sayisi = 0;
        for (j = 0; j < n; j++) {
            if (A[i][j] < 0) {
                negatif_sayisi++;
            }
        }
        B[i] = negatif_sayisi;
    }

    // B dizisini yazdir
    printf("Her satir için negatif degerlerin sayisi: [ ");
    for (i = 0; i < m; i++) {
        printf("%d ", B[i]);
    }
    printf("]\n");

    return 0;
}

