#include <stdio.h>

void selamla() { // void hiclik anlamina gelir. Fonksiyonun bir donus tipi olmadigi durumlarda kullanilir.
    printf("Merhaba Gazi!\n");
}

void gelismis_selamlama(char isim[], int yas) { // iki parametre alan fonksiyon
    printf("Merhaba %s! Sen %d yasindasin.\n", isim, yas);
}

int topla(int sayi1, int sayi2) { // iki parametre alip deger donduren fonksiyon
    return sayi1 + sayi2;
}

int main(void) {
    /*
     * fonksiyonlar: belirli isleri yaptirmak icin tanimlanan, kod tekrarini onlemek icin de kullanilan yapilardir.
     * <donus_tipi> <fonksiyon_ismi>(<parametreler>){
     *     <fonksiyon icerigi>
     * }
     * seklinde tanimlanir.
     */

    selamla();
    selamla(); // fonksiyonlar birden fazla kez cagirilabilirler.

    gelismis_selamlama("Ramazan", 19);

    int sayi1 = 15;
    int sayi2 = 20;

    int toplam = topla(sayi1, sayi2);
    printf("sayilarin toplami: %d\n", toplam);
    return 0;
}

