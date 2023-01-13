#include <stdio.h>

int main()
{
    int n, i, j;
    printf("n*n matrisinin boyutunu giriniz: ");
    scanf("%d", &n);

    int A[n][n], B[n*n], C[n*n], p = 0, neg = 0; // A matrisi, B ve C dizileri ve pozitif ve negatif eleman sayilarini tutan degiskenler tanimlandi

    // A matrisi kullanici tarafindan girildi
    printf("A matrisini giriniz: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // A matrisindeki pozitif elemanlar B dizisine, negatif elemanlar C dizisine aktarildi
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i][j] > 0)
                B[p++] = A[i][j];
            else
                C[neg++] = A[i][j];
        }
    }

    // sonuçlar ekrana yazdirildi
    printf("Pozitif elemanlar: ");
    for (i = 0; i < p; i++)
        printf("%d ", B[i]);
    printf("\nNegatif elemanlar: ");
    for (i = 0; i < neg; i++)
        printf("%d ", C[i]);

    return 0;
}

