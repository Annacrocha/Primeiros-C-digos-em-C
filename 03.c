#include <stdio.h>
#include <stdlib.h>

int main () {
	int base, altura;
	
	printf("Digite a base:");
	scanf("%i", &base);
	printf("Digite a altura:");
	scanf("%i", &altura);
	 
	 int area = base*altura;
	 int metros_Quadrados = area*10;
	 
	 printf("Area do retangulo: %i \n", area);
	 printf("Area do retangulo em metros quadrados: %i \n", metros_Quadrados);
	 
	 return 0;	
}
