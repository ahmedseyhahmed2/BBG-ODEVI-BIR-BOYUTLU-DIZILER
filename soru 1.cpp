#include <stdio.h>
#include <string.h>

int main()
{
    char c�mle[100];
    printf("Cumleyi girin: ");
    gets(c�mle); // C�mleyi klavyeden alin.

    char *dizi[100]; // C�mleyi ayirmak i�in bir dizi olusturun.
    int i = 0;
    char *kelime = strtok(c�mle, " "); // C�mleyi kelimelere ayirin.
    while (kelime != '\o')
    {
        dizi[i] = kelime; // Ayirilan kelimeyi diziye ekleyin.
        i++;
        kelime = strtok('\o', " "); // Bir sonraki kelimeyi alin.
    }

    printf("Cumlede %d kelime vardir.\n", i); // C�mledeki kelime sayisini yazdirin.

    return 0;
}

