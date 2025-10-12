#include <stdio.h>


int main(void) {
    // donguler
    /*
     * c dilinde for donguleri ve while donguleri olmak uzere 2 temel dongu vardir.
     *
     * 1. for donguleri: belirli bir kodun belirli bir sayida calismasi icin kullanilir.
     * for(ifade1, ifade2, ifade3) {
     * calistirilacak kod;
     * }
     * ifade1: kod blogunun basinda bir kere calistirilir.
     * ifade2: kod blogunun calismasi icin kosulu belirtir.
     * ifade3: kod blogunun calistigi her seferden sonra calisir.
     *
     */

    for (int a = 0; a < 10; a++) { // 0'dan 10'a kadar olan sayilari ekrana yazan dongu.
        printf("sayac: %d\n", a);
    }

    /*
     * while donguleri: belirli bir sartin saglanmasina bagli olarak calisan dongulerdir.
     *
     * while (kosul) {
     *  kosulun saglandigi durumlarda bu kod kismi calisir.
     * }
     */

    int sayac = 0;
    while (sayac < 5) { // 5 kere merhaba Gazi yazan dongu.
        printf("Merhaba Gazi\n");
        sayac++;
    }

    // do while yapisi

    int sayac2 = 0;
    do {
        printf("Do while dongusunden merhaba\n");
        sayac2++;
    } while (sayac2 < 5); // garanti olarak bir kez calisir. Sonrasinda calismasi icin kosulun saglanmasi gerekir.
    return 0;
}

