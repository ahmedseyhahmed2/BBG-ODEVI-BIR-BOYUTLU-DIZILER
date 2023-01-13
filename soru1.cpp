#include <stdio.h>

// matrisin ussunu hesaplar
void matrisin_ussunu_al(int matris[4][4], int uss, int sonuc[4][4]) {
    int i, j, k;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            sonuc[i][j] = 0;
            for (k = 0; k < 4; k++) {
                sonuc[i][j] += matris[i][k] * matris[k][j];
            }
        }
    }

    // eger uss 2'den fazla ise kacinci uss oldugunu belirleyip o ussu aliyoruz
    if (uss > 2) {
        int temp[4][4];
        for (i = 2; i < uss; i++) {
            for (j = 0; j < 4; j++) {
                for (k = 0; k < 4; k++) {
                    temp[j][k] = 0;
                    for (int l = 0; l < 4; l++) {
                        temp[j][k] += sonuc[j][l] * matris[l][k];
                    }
                }
            }
            for (j = 0; j < 4; j++) {
                for (k = 0; k < 4; k++) {
                    sonuc[j][k] = temp[j][k];
                }
            }
        }
    }
}

int main() {
    int matris[4][4];
    int uss;
    int sonuc[4][4];

    // matrisi kullanici tarafindan girin
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matris[%d][%d]: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
    printf("Ussu girin:");
    scanf("%d", &uss);
    matrisin_ussunu_al(matris, uss, sonuc);
    printf("Sonuc Matrisi:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }
    return 0;
}

