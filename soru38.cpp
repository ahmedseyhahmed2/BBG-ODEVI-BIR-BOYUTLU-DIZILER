#include <stdio.h>

int main()
{
    int n, i, j, matris[100][100], siralimatris[100][100];

    printf("Matrisin boyutunu giriniz (nxn): ");
    scanf("%d", &n);

    printf("Matrisin elemanlarini giriniz:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matris[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            siralimatris[i][j] = matris[i][j];

    // Siralama islemleri
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int l = 0; l < n; l++)
                {
                    if (i % 2 == 0)
                    {
                        if (siralimatris[i][j] < siralimatris[k][l])
                        {
                            int temp = siralimatris[i][j];
                            siralimatris[i][j] = siralimatris[k][l];
                            siralimatris[k][l] = temp;
                        }
                    }
                    else
                    {
                        if (siralimatris[i][j] > siralimatris[k][l])
                        {
                            int temp = siralimatris[i][j];
                            siralimatris[i][j] = siralimatris[k][l];
                            siralimatris[k][l] = temp;
                        }
                    }
                }
            }
        }
    }

    printf("Siralanmis matris:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", siralimatris[i][j]);
        printf("\n");
    }

    return 0;
}

