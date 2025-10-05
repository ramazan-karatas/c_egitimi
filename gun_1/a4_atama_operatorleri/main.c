#include <stdio.h>

int main(void) {
    int x = 5;

    printf("Atama Operatörleri:\n\n");

    printf("Başlangıçta x = %d\n", x);

    x += 3; // x = x + 3
    printf("x += 3 sonrası: %d\n", x);

    x -= 2; // x = x - 2
    printf("x -= 2 sonrası: %d\n", x);

    x *= 4; // x = x * 4
    printf("x *= 4 sonrası: %d\n", x);

    x /= 5; // x = x / 5
    printf("x /= 5 sonrası: %d\n", x);

    x %= 3; // x = x % 3
    printf("x %%= 3 sonrası: %d\n", x);

    return 0;
}
