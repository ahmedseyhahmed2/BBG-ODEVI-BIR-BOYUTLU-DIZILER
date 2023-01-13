#include <stdio.h>

int main()
{
    int n, i, j;
    printf("n*n matrisinin boyutunu giriniz: ");
    scanf("%d", &n);

    int A[n][n], B[n], C[n], skaler_carpim = 1; // 4 matrisi, B ve C dizileri ve skaler çarpim degiskeni tanimlandi

    // 4 matrisi kullanici tarafindan girildi
    printf("4 matrisini giriniz: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // her satirdaki en büyük elemanlar B dizisine aktarildi
    for (i = 0; i < n; i++)
    {
        B[i] = A[i][0]; // B dizisi için ilk elemanlar atandi
        for (j = 1; j < n; j++)
        {
            if (A[i][j] > B[i])
                B[i] = A[i][j];
        }
    }

    // her sütundaki en küçük elemanlar C dizisine aktarildi
    for (j = 0; j < n; j++)
    {
        C[j] = A[0][j]; // C dizisi için ilk elemanlar atandi
        for (i = 1; i < n; i++)
        {
            if (A[i][j] < C[j])
                C[j] = A[i][j];
        }
    }

    // skaler çarpim hesaplandi
    for (i = 0; i < n; i++)
    {
        skaler_carpim *= B[i] * C[i];
    }

    // sonuç ekrana yazdirildi
    printf("B dizisinin elemanlari: ");
    for (i = 0; i < n; i++)
        printf("%d ", B[i]);
    printf("\nC dizisinin elemanlari: ");
    for (i = 0; i < n; i++)
        printf("%d ", C[i]);
    printf("\nSkaler çarpim: %d\n", skaler_carpim);

    return 0;
}

