#include <stdio.h>

void carp(int a[][10], int b[][10], int c[][10], int m, int n, int p)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10], m, n, p;
    printf("Matris A'n�n sat�r say�s�n� girin: ");
    scanf("%d", &m);
    printf("Matris A'n�n s�tun say�s�n� girin: ");
    scanf("%d", &n);
    printf("Matris A'n�n elemanlar�n� girin: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matris B'nin sat�r say�s�n� girin: ");
    scanf("%d", &n);
    printf("Matris B'nin s�tun say�s�n� girin: ");
    scanf("%d", &p);
    printf("Matris B'nin elemanlar�n� girin: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    carp(a, b, c, m, n, p);
    printf("Sonu� matrisi: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

