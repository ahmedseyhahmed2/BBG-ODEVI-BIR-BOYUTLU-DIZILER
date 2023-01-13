#include <stdio.h>
#include <string.h>

int main()
{
    char encoded_message[1000];  // Kodlanmis mesaji saklayacak dizi
    int message_index = 0;       // Mesaji çözmek için kullanilacak dizi indisi
    char decoded_message[1000];  // Çözülmüs mesaji saklayacak dizi
    int decoded_index = 0;       // Çözülmüs mesajin indisi

    // Kodlanmis mesaji klavyeden al
    printf("Kodlanmis mesaji girin: ");
    gets(encoded_message);

    // Kodlanmis mesaji karakterlerine ayir
    int length = strlen(encoded_message);
    for (int i = 0; i < length; i++)
    {
        // Eger kodlanmis mesajda bir bosluk karakteri bulursak,
        // o karakteri atla ve ikinci karaktere geç
        if (encoded_message[i] == ' ')
        {
            message_index++;
            continue;
        }

        // Eger kodlanmis mesajda bir harf bulursak,
        // onu çözülmüs mesaj dizisine ekle
        if (encoded_message[i] >= 'A' && encoded_message[i] <= 'Z')
        {
            decoded_message[decoded_index] = encoded_message[i];
            decoded_index++;
        }

        // Eger kodlanmis mesajda bir sayi bulursak,
        // onu çözülmüs mesaj dizisine ekle
        if (encoded_message[i] >= '0' && encoded_message[i] <= '9')
        {
            decoded_message[decoded_index] = encoded_message[i];
            decoded_index++;
        }
    }

    // Çözülmüs mesaji ekrana yaz
    printf("Cozulmus mesaj: %s\n", decoded_message);

    return 0;
}

