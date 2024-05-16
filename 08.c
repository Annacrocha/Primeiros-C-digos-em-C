#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int graus_F;
	
	printf("Digite a temperatura do equipamento de refrigeracao (em Fahrenheit): ");
	scanf("%i", &graus_F);
	
	int graus_C = (graus_F-32)/1.8;
	
	printf("A temperatura do equipamento em Celsius: %i \n", graus_C);
	
	
	return 0; 
}
