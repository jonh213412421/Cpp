//install mingw64 for gmp lib
//various functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//function prototypes - so main can be the first function
void hello();
int sum(int a, int b);
void arrayprinter(int n, char array[]);

int main() {
    //prints hello
    hello();
    //sums 45 and 55
    printf("the sum is %d\n", sum(45, 55));
    char array[8] = {'1','2','3','4','5','6','7','8'};
    //prints only first 5 elements from array
    arrayprinter(5, array);
}

// functions doesn't return anything
void hello() {
    printf("Hello\n");
}

//returns an int
int sum(int a, int b) {
    int res = a + b;
    return res;
}

void arrayprinter(int n, char array[]) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%c\n", array[i]);
    }
}
