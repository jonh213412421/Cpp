//install mingw64 for gmp lib
//String tools
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    //allocates memory to pointer
    char *word = (char *)calloc(100, sizeof(char));
    char word1[100] = "nothing here";
    printf("Type the first word: ");
    scanf("%s", word);
    printf("word 1: %s\n", word);
    printf("word 2: %s\n", word1);
    //concat words and store it in the first arg
    strcat(word1, word);
    printf("word 1 (after cat): %s\n", word);
    printf("word 2 (after cat): %s\n", word1);
    //strcmp returns 0 if strings are equal
    if(strcmp(word1, word) != 0) {
        printf("different strings\n");
    }
    word = "test";
    //when using array, the best way to replace string is with strcpy
    strcpy(word1, "test");
    if(strcmp(word1, word) == 0) {
        printf("equal strings\n");
    }
    //calc and print lenght
    printf("%s", strlen(word));
}
