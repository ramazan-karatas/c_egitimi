#include <stdio.h>
int topla(int sayi1, int sayi2); // fonksiyon prototiplerini kullanarak kod okunurlugunu artirabiliriz.

int toplami_bul(int sayi); // sayi'ya kadar olan sayilarin toplamini bulan fonksiyon.


int main(void) {
    int sayi1 = 20;
    int sayi2 = 25;
    int toplam = topla(sayi1, sayi2); // fonskiyon bir deger dondurdugu icin bunu bir degiskene atayabiliriz.
    printf("toplam degeri: %d\n", toplam);

    int sayi = 5;
    printf("girilen sayi: %d, girilen sayiya kadarki sayilarin toplami: %d\n", sayi, toplami_bul(5));

    return 0;
}

int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int toplami_bul(int sayi) {
    int toplam = 0; // fonksiyon icinde tanimlanan degiskenlere sadece fonksiyon icinden ulasilabilir.

    if (sayi > 1) {
        return sayi + toplami_bul(sayi - 1);
    } else {
        return 1;
    }

}