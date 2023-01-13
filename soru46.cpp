#include <stdio.h>

int eskuvvetli(int a[][10], int m, int n)
{
    int i, j, k, flag = 1;
    int temp[10][10];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            temp[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                temp[i][j] += a[i][k] * a[k][j];
            }
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (temp[i][j] != a[i][j])
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
    if (eskuvvetli(a, m, n))
    {
        printf("Girilen matris eskuvvetli bir matristir\n");
    }
    else
    {
        printf("Girilen matris eskuvvetli bir matris degildir\n");
    }
    return 0;

    


