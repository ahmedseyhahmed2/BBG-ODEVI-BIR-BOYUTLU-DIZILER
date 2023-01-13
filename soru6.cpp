#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, j, uss;
    printf("n*n matrisinin boyutunu giriniz: ");
    scanf("%d", &n);
    printf("A matrisinin üssünü giriniz: ");
    scanf("%d", &uss);

    int A[n][n], sonuc[n][n]; // A matrisi ve sonuc matrisi tanimlandi

    // A matrisi kullanici tarafindan girildi
    printf("A matrisini giriniz: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // sonuc matrisi olusturuldu (A^uss)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sonuc[i][j] = 1;
            for (int k = 0; k < uss; k++)
            {
                sonuc[i][j] *= A[i][j];
            }
        }
    }

    // sonuçlar ekrana yazdirildi
    printf("A matrisinin %d. üssü: \n", uss);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}

