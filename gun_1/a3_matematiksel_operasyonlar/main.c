#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 3;

    printf("Aritmetik Operatörler:\n\n");

    printf("a + b = %d\n", a + b); // Toplama
    printf("a - b = %d\n", a - b); // Çıkarma
    printf("a * b = %d\n", a * b); // Çarpma
    printf("a / b = %d\n", a / b); // Bölme (tam sayı bölmesi)
    printf("a %% b = %d\n", a % b); // Mod alma (kalan bulma)

    // Not: %% -> printf'te % karakterini yazdırmak için kullanılır.

    return 0;
}