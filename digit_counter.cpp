//install mingw64 for gmp lib
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char c[100];
    // Read input number as a string
    printf("Enter a number: ");
    fgets(c, sizeof(c), stdin);  // fgets allows spaces in input
    int digits = strlen(c);

    // Cases of number format
    if (strchr(c, '.')) {
        digits = digits - 2;
        printf("Number of digits: %zu\n", digits);
    }
    if (strchr(c, ',')) {
        digits = digits - 2;
        printf("Number of digits: %zu\n", digits);
    }
    if (strchr(c, ';')) {
        printf("Incorrect number format");
        return 1;
    }
    if (strchr(c, ' ')) {
        printf("Incorrect number format");
        return 1;
    }
    else {
        digits = digits - 1;
        printf("Number of digits: %zu\n", digits);
    }
    return 0;
}
