//install mingw64 for gmp lib
//Argument Vector
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        printf("\n%s\n", argv[i]);
    }
}
