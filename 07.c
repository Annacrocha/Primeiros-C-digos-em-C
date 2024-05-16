#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int peso_Prato, resultado ;
	
	printf("Digite o peso do prato montado (em quilos): ");
	scanf("%i", &peso_Prato);
	
	resultado = peso_Prato * 45;
	printf("O valor a pagar: %i \n", resultado);
		
}
