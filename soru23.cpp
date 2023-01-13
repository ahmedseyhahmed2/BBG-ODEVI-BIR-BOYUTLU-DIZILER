#include <stdio.h>

int main() {
    int m, n;
    printf("Matrisin boyutunu giriniz (m*n): ");
    scanf("%d %d", &m, &n);

    int A[m][n];
    int i, j;

    // Matrisi kullanici tarafindan gir
    printf("Matrisi giriniz: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int pozitif_sayisi = 0;
    // Her satir için pozitif degerleri say
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (A[i][j] > 0) {
                pozitif_sayisi++;
            }
        }
    }
    // Pozitif sayisini yazdir
    printf("Pozitif degerlere sahip eleman sayisi: %d", pozitif_sayisi);

    return 0;
}

