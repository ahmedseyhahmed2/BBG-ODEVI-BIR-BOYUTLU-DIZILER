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

    // Her satir için en büyük elemani bul
    for (i = 0; i < n; i++) {
        int enbuyuk = matris[i][0];
        for (j = 1; j < n; j++) {
            if (matris[i][j] > enbuyuk) {
                enbuyuk = matris[i][j];
            }
        }
        // En büyük elemani yazdir
        printf("Satir %d icin en buyuk eleman: %d\n", i+1, enbuyuk);
    }

    return 0;
}

