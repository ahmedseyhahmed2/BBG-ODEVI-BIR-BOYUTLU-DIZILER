#include <stdio.h>

void findRegions(int matris[][10], int m, int n) {
    int i, j;
    int x1, y1, x2, y2;
    int regionCount = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matris[i][j] == 0) {
                x1 = i;
                y1 = j;
                while (matris[i][j] == 0) {
                    i++;
                }
                x2 = i-1;
                i--;
                while (matris[i][j] == 0) {
                    j++;
                }
                y2 = j-1;
                regionCount++;
                printf("Region %d: (%d, %d) - (%d, %d)\n", regionCount, x1, y1, x2, y2);
            }
        }
    }
}

int main() {
    int matris[10][10], m, n;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &m);
    printf("Matrisin sütun sayisini girin: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini girin (0 veya 1):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matris[i][j]);
        }
    }
    printf("0 içeren dikdörtgensel bölgeler:\n");
    findRegions(matris, m, n);
    return 0;
}


