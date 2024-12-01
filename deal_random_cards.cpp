//install mingw64 for gmp lib
//deal a randon hand of cards
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define NUM_NAIPE 4
#define NUM_NUMERO 13

int main() {
    // initial variables
    bool cards_in_hand[NUM_NAIPE][NUM_NUMERO];
    int num_cards, naipe, numero, i;
    const char naipes[] = {'g', 'h', 'p', 'e'};
    const char numeros[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 't', 'J', 'Q', 'K'}; //10 is a problem... it is dealt as an t
    // gets hand size
    printf("Whats the hand size? ");
    scanf("%d", &num_cards);
    //deals cards
    for (i = 1; i < num_cards + 1; i++) {
        //atribui naipe aleatório
        naipe = rand() % NUM_NAIPE;
        //atribui numero aleatório
        numero = rand() % NUM_NUMERO;
        //print hand
        printf("carta %d: %c%c\n", i, numeros[numero], naipes[naipe]);
    }
}
