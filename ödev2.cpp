#include <stdio.h>

int faktoriyel(int sayi) {
    if (sayi == 0) {
        return 1;
    } else {
        int sonuc = 1;
        for (int i = 1; i <= sayi; i++) {
            sonuc *= i;
        }
        return sonuc;
    }
}

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    int sonuc = faktoriyel(sayi);

    printf("%d sayisinin faktoriyeli: %d\n", sayi, sonuc);

    return 0;
}

