#include <stdio.h>
#define b 10
#define c 15

int main() {
	// Declare variables. They initialize equal
	int a = 5;
	int j = 5;
	// infinite loop
	while (1) {
		if (b == 10)
			printf("b é uma constante com valor de %d", b);
		// check if constant is diferent
		if (c != 10)
			printf("c é uma constante com valor de %d", c);
		int operador;
			// Print current value and asks for increase
			// can type negative number to subtract
			printf("o valor atual e %d\nquer incrementar em quanto?\n", a);
			scanf_s("%d", &operador);
			// sum variable and operator
			a = a + operador;
		// checks if value is the same or if it changed since last iteration
		if (a == j)
			printf("valor de a continua %d\n", a);
		else
			printf("o valor de a mudou\n");
		// equalize variables after iteration run
		j = a;
	}
	return 0;
}
