//install mingw64 for gmp lib
//Argument Vector
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    //without exe command
    for (int i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    //prints the exe command
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}
