#include <stdio.h>

/* 8. Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo float
chamada n�mero. Declare tamb�m outra vari�vel do tipo float chamada x atribuindo-lhe o valor 100.25. */

int main()
{
	float numero, x;
	
		printf("\n   Atribua um valor a variavel 1: ");
	scanf("%f",&numero);
	
	printf("\n   o valor atribuido foi: %f", numero);

	printf("\n\n   Atribua um valor a variavel 2: ");
	scanf("%f",&x); 
	
	printf("\n   o valor atribuido foi: %f", x+100.25);
	
	
	
	return 0;
}