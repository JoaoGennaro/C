#include <stdio.h>

/* 7. Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo int
chamada numero. Declare tamb�m outra vari�vel do tipo int chamada x atribuindo-lhe o valor 100. */

int main()
{
    int numero = 0 , x;
	
	
	printf("\n   Atribua um valor a variavel 1: ");
	scanf("%i",&numero);
	
	printf("\n   o valor atribuido foi: %i", numero);

	printf("\n\n   Atribua um valor a variavel 2: ");
	scanf("%i",&x); 
	
	printf("\n   o valor atribuido foi: %i", x+100);
	
	return 0;
}
