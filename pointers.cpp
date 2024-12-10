//install mingw64 for gmp lib
//pointers working
//1
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


//install mingw64 for gmp lib
//soma números em array de inteiros
//2
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int array[] = {1, 6, 13, 30, 25};
    int n = 5;
    int *p;
    int sum = 0;
    p = &array[0];
    for (p = &array[0]; p < &array[n]; p++) {
        sum += *p;
    }
    printf("soma: %d", sum);
}


//install mingw64 for gmp lib
//pointers in bidimensional arrays
#include <stdlib.h>
#include <stdio.h>

int main() {
    int a[2][3] = {{2,3,4}, {4,5,6}};
    int (*p)[2][3];
    //assign pointer to address of a
    p = &a;
    //prints first element, first row
    printf("%d\n", (*p)[0][0]);
    //replaces first element, first row
    *p[0][0] = 5;
    printf("%d\n", (*p)[0][0]);
    //first element in the second row
    printf("%d\n", (*p+1)[0][0]);
}
