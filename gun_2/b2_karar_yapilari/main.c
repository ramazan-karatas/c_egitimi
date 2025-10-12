#include <stdio.h>

int main(void) {
    // karar yapilari: if/else ve switch

    // if/else yapilari mantiksal bir ifadenin dogruluk/yanlisligina gore calisir.
    /*
     * if (kosul) {
     *     kosul gerceklesince calisacak kisim.
     * } else if (ikinci_kosul) {
     *     ikinci kosul gerceklesince calisacak kisim.
     * } else {
     *     hicbir kosul gerceklesmezse calisacak kisim.
     * }
     */

    // else if ve else kisimlari zorunlu degildir.

    int sayi1 = 14;
    int sayi2 = 25;

    if (sayi1 > sayi2) {
        printf("sayi1 sayi2'den buyuktur.\n");
    } else if (sayi1 < sayi2) {
        printf("sayi1 sayi2'den kucuktur.\n");
    } else {
        printf("iki sayi esittir.\n");
    }

    // switch yapisi da farkli bir kontrol yapisidir.

    /*
     * switch (ifade) {
     *     case 1 : ifade 1'e esit ise calisacak kod;
     *     case 2 : ifade 2'ye esit ise calisacak kod;
     *     case 3 : ifade 3'e esit ise calisacak kod;
     *     ...
     *     default: case'lerin hicbirinin gerceklesmemesi durumunda calisacak kod;
     * }
     */
    int sayi3 = 3;
    switch (sayi3) {
        case 1 : printf("sayi 1'e esit\n"); break;
        case 2 : printf("sayi 2'ye esit\n"); break;
        case 3: printf("sayi 3'e esit\n"); break;
        default: printf("sayi buradaki degerlerden baska bir deger\n");
    }
    // case'ler yazilirken break konmazsa gecerli case'ten sonraki tum case'ler calisir.
    return 0;

}