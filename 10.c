#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int numero1;
	int numero2;
	int novo_valor;
	
	printf("Digite o primeiro valor: \n");
	scanf("%i", &numero1);
	printf("Digite o segundo valor: \n");
	scanf("%i", &numero2);
	
	novo_valor = numero1;
	numero1 = numero2;
	numero2 = novo_valor;
	
	printf("Novo valor de 1: %i \n", numero1);
	printf("Novo valor de 2: %i \n", numero2);
	
}
