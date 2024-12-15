//install mingw64 for gmp lib
//Returns home from a url
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define HTTP 7

int main(int argc, char *argv[]) {
    //dont forget to initialize
    char url[100] = "";
    char aux[100] = "";
    printf("Enter an URL: ");
    scanf("%s", url);
    printf("%s\n", url);
    int len = strlen(url);
    printf("%d\n", len);
    for (int i = 0; i < len; i++) {
        if (i > HTTP && url[i] == '/') {
            printf("%c\n", url[i]);
            for (int j = 0; j < i; j++) {
                aux[j] = url[j];
            }
        }
    }
    printf("aux: %s", aux);
}
