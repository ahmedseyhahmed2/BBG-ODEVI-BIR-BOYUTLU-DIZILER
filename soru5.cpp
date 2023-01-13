#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j;
    printf("n*n matrisinin boyutunu giriniz: ");
    scanf("%d", &n);

    int A[n][n]; // 4 matrisi tanimlandi
    float B[n][n], C[n][n], D[n][n]; // B,C,D matrisleri tanimlandi

    // 4 matrisi kullanici tarafindan girildi
    printf("4 matrisini giriniz: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // B matrisi olusturuldu
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            B[i][j] = pow(A[i][j], 2);
        }
    }

    // C matrisi olusturuldu
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = sqrt(A[i][j]);
        }
    }

    // D matrisi olusturuldu (B.C)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            D[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                D[i][j] += B[i][k] * C[k][j];
            }
        }
    }

    // sonuçlar ekrana yazdirildi
    printf("B matrisi: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f ", B[i][j]);
        }
        printf("\n");
    }
    printf("C matrisi: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f ", C[i][j]);
        }
        printf("\n");
    }
    printf("D matrisi: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f ", D[i][j]);
        }
        printf("\n");
    }

    return 0;
}

