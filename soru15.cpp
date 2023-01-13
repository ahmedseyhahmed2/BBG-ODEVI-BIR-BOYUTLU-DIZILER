#include <stdio.h>

int main() {
    int n;
    printf("Matrisin boyutunu giriniz (n*n): ");
    scanf("%d", &n);

    int matris[n][n]; // Matris tanimlandi

    // Matris kullanici tarafindan girildi
    printf("Matrisi giriniz: \n");
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }

    // Ana kösegen ve yedek kösegen üzerindeki elemanlari degistir
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                int temp = matris[i][j];
                matris[i][j] = matris[n - 1 - i][n - 1 - j];
                matris[n - 1 - i][n - 1 - j] = temp;
            }
        }
    }

    // Degistirilen matrisi ekrana yazdir
    printf("Degistirilen matris: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}

