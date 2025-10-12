#include <stdio.h>

int main(void) {
    /*
     * dizi tanimi:
     * <tip_belirteci> <dizi_ismi>[<dizi_uzunlugu>];
     */

    int sayi_dizisi[4] = {1,2,3,4};

    // dizi elemanlarina ulasmak icin index kullaniyoruz.

    int ilk_eleman = sayi_dizisi[0]; // indexleme sifirdan baslar. Dizinin ilk elemani 0. indexte bulunur.
    printf("dizinin ilk elemani: %d\n", ilk_eleman);


    // char dizileri ile metinleri tutabiliriz.

    char metin_dizisi[] = "Gazi Universitesi";
    printf("metin dizisi icerigi: %s\n", metin_dizisi);


    return 0;
}