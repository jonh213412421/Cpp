//install mingw64 for gmp lib
//Returns largest word
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *words[20];
    int lenghts[20];
    char aux[100];
    for (int i = 0; i < 20; i++) {
        if (strcmp(aux, "done") == 0) {
            break;
        }

        printf("Digite uma palavra: ");
        scanf("%s", aux);
        words[i] = strdup(aux);
        printf("palavra digitada: %s\n", words[i]);
        int len = strlen(words[i]);
        lenghts[i] = len;
        printf("tamanho da palavra: %d\n", len);
    }

    int max;
    for (int i = 0; i < 2; i++) {
        printf("%d\n", lenghts[i]);
        printf("%d\n", lenghts[i + 1]);
        if (lenghts[i] < lenghts[i + 1]) {
            max = lenghts[i + 1];  // If the next element is greater, use it
            lenghts[i + 1] = max;
        } else {
            max = lenghts[i];  // Otherwise, keep the current element
            lenghts[i + 1] = max;
        }
        printf("max: %d\n", max);
    }
}
