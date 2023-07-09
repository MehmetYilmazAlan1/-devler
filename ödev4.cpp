#include <stdio.h>

int main() {
    float sayi;

    printf("Bir ondalik sayi girin: ");
    scanf("%f", &sayi);

    int *ptr = (int*)&sayi;

    printf("Girilen sayi onaltilik (hexadecimal) olarak: %X\n", *ptr);

    return 0;
}

