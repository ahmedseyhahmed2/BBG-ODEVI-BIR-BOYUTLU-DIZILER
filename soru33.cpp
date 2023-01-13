#include <stdio.h>

void upperTriangularMatrix(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", 1);
            } else {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}

void symmetricPascalMatrix(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", (i == 0 || j == 0) ? 1 : (i + j) - 1);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);
    printf("\nUpper Triangular Matrix:\n");
    upperTriangularMatrix(n);
    printf("\nSymmetric Pascal Matrix:\n");
    symmetricPascalMatrix(n);
    return 0;
}

