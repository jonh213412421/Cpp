#include <stdio.h>

int main() {
	// use long long for long numbers. Even then, it might not be enough
	long long a = 1;
	long long b;
	long long resultado = 2;
	// loop to generate 90 numbers of the sequence
	for (int i = 1; i < 90; i++) {
		b = resultado;
		resultado = resultado + a;
		a = b;
		printf("iteração %d: %lld\n", i, resultado);
	}
	return 0;
}
