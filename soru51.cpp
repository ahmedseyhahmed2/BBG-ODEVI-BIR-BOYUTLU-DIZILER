#include <stdio.h>

void transpose(int matris[][10], int m, int n) {
    int i, j, temp;
    for (i = 0; i < m; i++) {
        for (j = i+1; j < n; j++) {
            temp = matris[i][j];
            matris[i][j] = matris[j][i];
            matris[j][i] = temp;
        }
    }
}

int main() {
    int matris[10][10], m, n;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &m);
    printf("Matrisin sütun sayisini girin: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini girin: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }
    transpose(matris, m, n);
    printf("Transpose edilmis matris:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}

