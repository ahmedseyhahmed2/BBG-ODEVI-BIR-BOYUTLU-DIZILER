#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void gaussJordan(int n, double a[n][n+1], double x[n]) {
    int i, j, k;
    double temp, temp1;
    for (i = 0; i < n; i++) {
        temp = a[i][i];
        for (j = i; j <= n; j++) {
            a[i][j] = a[i][j] / temp;
        }
        for (k = 0; k < n; k++) {
            if (k != i) {
                temp1 = a[k][i];
                for (j = 0; j <= n; j++) {
                    a[k][j] = a[k][j] - a[i][j] * temp1;
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        x[i] = a[i][n];
    }
}

int main() {
    int n = 3;
    double a[3][4] = {{1, 2, 3, 7}, {4, 5, 6, 8}, {7, 8, 9, 9}};
    double x[3];
    gaussJordan(n, a, x);
    int i;
    for (i = 0; i < n; i++) {
        printf("x%d = %f\n", i+1, x[i]);
    }
    return 0;
}

