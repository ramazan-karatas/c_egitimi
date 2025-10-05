#include <stdio.h>

int main(void) {
    int a = 1; // true
    int b = 0; // false

    printf("Mantıksal Operatörler:\n\n");

    printf("a && b = %d  \n", a && b);
    printf("a || b = %d  \n", a || b);
    printf("!a = %d      \n", !a);
    printf("!b = %d      \n", !b);

    // 1 = true, 0 = false anlamına gelir.

    return 0;
}
