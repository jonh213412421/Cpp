//install mingw64 for gmp lib
//pointers working
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, *p;
    i = 45;
    printf("i: %d\n", i);
    //p =... edits address
    p = &i;
    printf("p: %d\n", *p);
    //*p edits variable value
    *p = 5;
    printf("i: %d\n", i);
    printf("p: %d\n", *p);
}
