//install mingw64 for gmp lib
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <gmp.h>

int main() {
    // Declare GMP integer variables
    // double would work too!
    mpz_t a, b, resultado;

    // Initialize the variables
    mpz_init_set_ui(a, 1);      // a = 1
    mpz_init_set_ui(b, 0);      // b = 0 (initial value for swapping)
    mpz_init_set_ui(resultado, 2); // resultado = 2 (starting point for the sequence)

    // Loop to generate the next 100 numbers of the sequence
    for (int i = 1; i <= 100; i++) {
        // Print the current result (the i-th number of the sequence)
        printf("numero %d: ", i);
        mpz_out_str(stdout, 10, resultado); // Print resultado in base 10
        printf("\n");

        // Update the sequence: 
        // b = resultado, resultado = resultado + a, a = b
        mpz_set(b, resultado);            // b = resultado
        mpz_add(resultado, resultado, a); // resultado = resultado + a
        mpz_set(a, b);                   // a = b
    }

    // Clear the GMP variables
    mpz_clear(a);
    mpz_clear(b);
    mpz_clear(resultado);
    std::cout << "Pressione enter para sair...";
    std::cin.get(); // Wait for Enter key press

    return 0;
}
