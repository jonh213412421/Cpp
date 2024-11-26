#include <stdio.h>
#define PI 3.14159

int main() {
    // Print "Hello, World!" to the console
    printf("Hello, World!\n");
    // Declare and print int
    int numero_cinco = 5;
    printf("Int: %d\n", numero_cinco);
    // Declare and print float
    float numero_cinco_ponto_um = 5.1;
    printf("Float: %.1f\n", numero_cinco_ponto_um);
    // sum of float and int and Print
    // in those cases, it has to be a float
    float resultado_soma = numero_cinco + numero_cinco_ponto_um;
    printf("Soma de Int e Float: %.1f\n", resultado_soma);
    // Print Pi com duas casas decimais
    // Pi is declared in the header
    printf("Pi: %.2f\n", PI);
    // Declare and print string
    // string is a vector of chars
    char string_test [] = "Olá Mundo\n";
    // Print the string
    printf("%s\n", string_test);
    return 0;
}
