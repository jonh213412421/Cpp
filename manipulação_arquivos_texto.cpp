//install mingw64 for gmp lib
//criação e leitura de um arquivo txt
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char aux[100];
    //there is "w", "a" and "r", just like python
    fp = fopen("teste.txt", "w");
    fprintf(fp, "string teste\n");
    fprintf(fp, "outra string teste");
    fclose(fp);

    fp = fopen("teste.txt", "r");
    //read lines. Each execution reads a single line
    fgets(aux, sizeof(aux), fp);
    fgets(aux, sizeof(aux), fp);
    printf("%s", aux);
}
