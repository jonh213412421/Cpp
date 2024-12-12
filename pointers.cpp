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


//install mingw64 for gmp lib
//reverse message using pointers
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char text[1000];
    char *pointer;
    pointer = text;
    printf("hi, type a message:\n");
    scanf("%s", &text);
    printf("%s\n", text);
    printf("%s\n", pointer);
    int lenght, i;
    lenght = strlen(text);
    printf("%d\n", lenght);
    for(i = 0; i < lenght / 2; i++) {
        char temp = *(text + i);  // Store the character at i
        *(text + i) = *(text + lenght - i - 1);  // Copy the character from the end
        *(text + lenght - i - 1) = temp;  // Place the stored character at the end
        
    }
    printf("%s", pointer);
}


//install mingw64 for gmp lib
//simple word searcher
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char palavra[10];
    char *pointer_text;
    char *pointer_palavra;
    printf("type a text:\n");
    scanf("%s", &text);
    pointer_text = text;
    printf("type a word to be searched:\n");
    scanf("%s", &palavra);
    pointer_palavra = palavra;
    int len_palavra = strlen(palavra);
    int match = 0;
    for (int j = 0; j < 100; j++) {
        if (match == strlen(palavra)) {
            printf("match em %d\n", j);
            match = 0;
            break;
        }
        if (*(pointer_text + j) == *(pointer_palavra + j)) {
            char temp = *(pointer_text + j);
            printf("%d\n", j);
            printf("%c\n", temp);
            printf("%c\n", *(pointer_palavra + j));
            match++;
        }
        else {
            match = 0;
        }
    }
}
