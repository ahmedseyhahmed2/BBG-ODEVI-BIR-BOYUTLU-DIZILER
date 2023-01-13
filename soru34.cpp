#include <stdio.h>

int main()
{
    int i, j, satirlar, katsayi = 1;
    int toplam = 0;

    printf("Satirlarin sayisini giriniz: ");
    scanf("%d", &satirlar);

    for (i = 0; i < satirlar; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                katsayi = 1;
            else
                katsayi = katsayi * (i - j + 1) / j;
            printf("%d ", katsayi);
            toplam += katsayi;
        }
        printf("\n");
    }
    printf("Toplam: %d", toplam);
    return 0;
}

