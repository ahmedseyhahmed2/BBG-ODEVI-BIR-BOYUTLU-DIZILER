#include <stdio.h>

void swap_secondary_diagonal(int n, int A[n][n]) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i + j == n - 1) {
                temp = A[i][j];
                A[i][j] = A[j][i];
                A[j][i] = temp;
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n = 3;
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    swap_secondary_diagonal(n, A);
    return 0;
}

