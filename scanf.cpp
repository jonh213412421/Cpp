#include <stdio.h>

int main() {
	// declara variáveis
	float numero_um;
	float numero_dois;
	float resultado;
	// escaneia número 1
	printf("digite um número: ");
	// scanf skips a line
	scanf_s("%f", &numero_um);
	printf("%.2f\n", numero_um);
	// escaneia número 2
	printf("digite um número: ");
	// scanf skips a line
	scanf_s("%f", &numero_dois);
	printf("%.2f\n", numero_dois);
	// sum and print sum
	resultado = numero_um + numero_dois;
	// ele tende a arredondar para cima
	printf("Resultado: %.2f", resultado);
	return 0;
}
