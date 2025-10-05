#include <stdio.h>

int main(void) {
    char my_char = 'r';
    printf("Char tipi veri: %c \n", my_char); // char tipi değişkenler için %c kullanılır.
    // burada \n karakteri imleci yeni satıra geçirir.

    short short_var = 234;
    printf("short tipi veri: %hd \n", short_var); // short tipi değişkenler için %hd kullanılır.

    int int_var = 12;
    printf("int tipi veri: %d \n", int_var); // sayilar için %d kullanılır.




    long long_var = 2391932;
    printf("long tipi veri: %ld \n", long_var); // long sayılar için %ld kullanılır.

    float float_var = 12.32;
    printf("float tipi veri: %f \n", float_var); // virgüllü sayılar için %f kullanılır.


    double double_var = 1.32;
    printf("double tipi veri: %lf \n", double_var); // double sayılar için %lf kullanılır.

    return 0;
}