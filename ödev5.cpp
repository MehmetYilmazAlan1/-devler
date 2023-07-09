#include <stdio.h>

int main() {
    FILE *dosya;

    dosya = fopen("metin.txt", "w");

    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    char metin[] = "Bu bir ornek metin dosyasidir.";
    fprintf(dosya, "%s", metin);

    fclose(dosya);

    dosya = fopen("metin.txt", "r");

    if (dosya == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }

    char okunanMetin[100];
    fgets(okunanMetin, 100, dosya);

    printf("Dosyadan okunan metin: %s", okunanMetin);

    fclose(dosya);

    return 0;
}

