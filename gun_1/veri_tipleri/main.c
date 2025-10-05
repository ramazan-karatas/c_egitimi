#include <stdio.h>

int main(void) {
    char my_char = 'r';
    printf("Char tipi veri: %c \n", my_char); // char tipi değişkenler için %c kullanılır.
    // burada \n karakteri imleci yeni satıra geçirir.

    int sayi1 = 12;
    printf("int tipi veri: %d \n", sayi1); // sayilar için %d kullanılır.

    short short1 = 234;
    printf("short tipi veri: %d \n", short1);


    long long_var = 2391932;
    printf("long tipi veri: %ld \n", long_var); // long sayılar için %ld kullanılır.

    float float_var = 12.32;
    printf("float tipi veri: %f \n", float_var); // virgüllü sayılar için %f kullanılır.


    double sayi2 = 1.32;
    printf("double tipi veri: %f \n", sayi2);

    return 0;
}