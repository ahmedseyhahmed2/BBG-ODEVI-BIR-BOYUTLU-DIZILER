#include <stdio.h>

void dondur(int a[][10], int m, int n)
{
    int temp[10][10];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            temp[j][n-1-i] = a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a[i][j] = temp[i][j];
        }
    }
}

int main()
{
    int a[10][10], m, n;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &m);
    printf("Matrisin sütun sayisini girin: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini girin: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    dondur(a, m, n);
    printf("Dondurulmus matris: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

