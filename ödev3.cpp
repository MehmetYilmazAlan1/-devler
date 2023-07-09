#include <stdio.h>

int main() {
    int sayi1 = 10;
    int sayi2 = 20;

    int *ptr1, *ptr2;
    ptr1 = &sayi1;
    ptr2 = &sayi2;

    printf("sayi1 degeri: %d\n", *ptr1);
    printf("sayi2 degeri: %d\n", *ptr2);

    return 0;
}

