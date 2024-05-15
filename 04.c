#include <stdio.h>
#include <stdlib.h>

int main () {
	int valor1;
	int valor2;
	
	printf("Digite o primeiro valor (maior): ");
	scanf("%i", &valor1);
	printf("Digite o ssegundo valor (menor): ");
	scanf("%i", &valor2);
	
	int diferenca = valor1 - valor2;
	
	printf("A diferenca entre os numeros: %i", diferenca);
	
	return 0;
}
