#include <stdio.h>

int main()
{
    int n, i, j, matris[100][100], secim;

    printf("Kare matrisin boyutunu giriniz (nxn): ");
    scanf("%d", &n);

    printf("1. Sifir Matrisi\n");
    printf("2. Bir Matrisi\n");
    printf("3. Birim Matrisi\n");
    printf("Seciminiz: ");
    scanf("%d", &secim);

    switch (secim)
    {
    case 1:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                matris[i][j] = 0;
        break;
    case 2:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                matris[i][j] = 1;
        break;
    case 3:
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                matris[i][j] = 0;
        for (i = 0; i < n; i++)
            matris[i][i] = 1;
        break;
    default:
        printf("Gecersiz secim yaptiniz!\n");
        return 0;
    }

    printf("Olusturulan matris:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", matris[i][j]);
        printf("\n");
    }

    return 0;
}

