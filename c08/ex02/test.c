#include <stdio.h>
#include "ft_abs.h"

int main() {
    int a = -50;
    int b = 10;
    int c = 0;

    printf("Valeur absolue de %d est %d\n", a, ABS(a));
    printf("Valeur absolue de %d est %d\n", b, ABS(b));
    printf("Valeur absolue de %d est %d\n", c, ABS(c));

    return 0;
}