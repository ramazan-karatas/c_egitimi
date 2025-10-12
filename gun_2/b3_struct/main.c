#include <stdio.h>

int main(void) {
    // struct:
    /*
     * C dilinde structlar farkli tipte verileri tutmak icin kullanilir.
     * struct <struct_ismi> {
     * alan1 <alan1_ismi>;
     * alan2 <alan2_ismi>;
     * };
     * seklinde tanimlanir.
     */

    struct Ogrenci {
        int numara;
        char isim[30];
    };
    struct Ogrenci ogrenci1 = {122, "Ramazan"};
    printf("Ogrenci numarasi: %d\n", ogrenci1.numara); // struct icindeki alanlara . notasyonu ile ulasabiliriz.
    printf("Ogrenci ismi: %s\n", ogrenci1.isim);

    typedef struct {
        int id;
        char isim[30];
        float ortalama;
    } YeniOgrenci;

    YeniOgrenci yeni_ogrenci = {12,"Ramazan", 33.2}; // typedef ile tanimladigimiz icin struct yazmadan olusturduk.

    printf("Yeni Ogrencinin adi: %s\n", yeni_ogrenci.isim);


    return 0;
}