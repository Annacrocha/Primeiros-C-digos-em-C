#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int valor1;
	int valor2;
	
	printf("Digite o primeiro valor (dividendo): ");
	scanf("%i", &valor1);
	printf("Digite o segundo valor (divisor): ");
	scanf("%i", &valor2);
	
	int divisao = valor1 / valor2;
	
	printf("Resultado da divisao: %i \n", divisao);
	
	return 0;
}
