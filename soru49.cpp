#include <stdio.h>

int main()
{
    int matris[10][10], m, n, tek_sayi = 0, cift_sayi = 0;
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &m);
    printf("Matrisin sütun sayisini girin: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini girin: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matris[i][j]);
            if (matris[i][j] % 2 == 0)
                cift_sayi++;
            else
                tek_sayi++;
        }
    }
    printf("Matrisin elemanlarinin %d tanesi tek sayidir ve %d tanesi çift sayidir.\n", tek_sayi, cift_sayi);
    return 0;
}

