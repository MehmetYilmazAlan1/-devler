#include <stdio.h>
#include <string.h>

int main() {
    char cumle[100];

    printf("Bir kelime veya cumle girin: ");
    gets(cumle);

    int uzunluk = strlen(cumle);

    printf("Girilen kelimenin veya cumlenin uzunlugu: %d\n", uzunluk);

    return 0;
}

