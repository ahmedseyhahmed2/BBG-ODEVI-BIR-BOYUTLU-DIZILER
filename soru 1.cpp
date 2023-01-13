#include <stdio.h>
#include <string.h>

int main()
{
    char cümle[100];
    printf("Cumleyi girin: ");
    gets(cümle); // Cümleyi klavyeden alin.

    char *dizi[100]; // Cümleyi ayirmak için bir dizi olusturun.
    int i = 0;
    char *kelime = strtok(cümle, " "); // Cümleyi kelimelere ayirin.
    while (kelime != '\o')
    {
        dizi[i] = kelime; // Ayirilan kelimeyi diziye ekleyin.
        i++;
        kelime = strtok('\o', " "); // Bir sonraki kelimeyi alin.
    }

    printf("Cumlede %d kelime vardir.\n", i); // Cümledeki kelime sayisini yazdirin.

    return 0;
}

