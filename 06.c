#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int peso_Quilos;
	
	printf("Digite seu peso (em quilos): ");
	scanf("%i", &peso_Quilos);
	
	int peso_Gramas = peso_Quilos * 1000;
	
	printf("Peso em gramas: %i \n", peso_Gramas);
	
	return 0;
}
