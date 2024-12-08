//install mingw64 for gmp lib
//decompose
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part) {
    *int_part = (long) x;
    *frac_part = x - *int_part;
    printf("int: %ld\n", *int_part);
    printf("decimal: %.6f\n", *frac_part);
}

int main() {
    long i;
    double d;
    float num;
    printf("digite um número: ");
    scanf("%f", &num);
    decompose(num, &i, &d);
}
