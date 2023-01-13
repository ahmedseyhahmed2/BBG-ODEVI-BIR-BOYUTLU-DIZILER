#include <stdio.h>

int kendinedonuk(int a[][10], int m)
{
    int i, j, flag = 1;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (i == j && a[i][j] != 1)
            {
                flag = 0;
                break;
            }
            else if (i != j && a[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}

int main()
{
    int a[10][10], m;
    printf("Matrisin boyutunu girin: ");
    scanf("%d", &m);
    printf("Matrisin elemanlarini girin: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (kendinedonuk(a, m))
    {
        printf("Girilen matris kendine donuk bir matristir\n");
    }
    else
    {
        printf("Girilen matris kendine donuk bir matris degildir\n");
    }
    return 0;
}

