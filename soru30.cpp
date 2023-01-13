#include <stdio.h>

void split_matrix(int n, int A[n][n]) {
    int i, j;
    for (i = 0; i < n/2; i++) {
        for (j = 0; j < n/2; j++) {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
    for (i = n/2; i < n; i++) {
        for (j = 0; j < n/2; j++) {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
    for (i = 0; i < n/2; i++) {
        for (j = n/2; j < n; j++) {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
    for (i = n/2; i < n; i++) {
        for (j = n/2; j < n; j++) {
            printf("A[%d][%d] = %d\n", i, j, A[i][j]);
        }
    }
}

int main() {
    int n = 4;
    int A[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    split_matrix(n, A);
    return 0;
}

