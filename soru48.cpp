#include <stdio.h>
#include <stdbool.h>

bool markov_matris(int a[][10], int m, int n) {
    int i, j;
    int sum;
    for (i = 0; i < m; i++) {
        sum = 0;
        for (j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if (sum != 1)
            return false;
    }
    return true;
}

int main() {
    int a[10][10], m, n;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &m);
    printf("Matrisin sutun sayisini girin: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini girin: \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    if (markov_matris(a, m, n))
        printf("Girilen matris Markov matristir\n");
    else
        printf("Girilen matris Markov matrisi degildir\n");
    return 0;
}

