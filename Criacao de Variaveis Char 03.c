#include <stdio.h>

/* 9. Escreva um programa em linguagem C que contenha a declara��o de uma vari�vel do tipo char
chamada letra. Declare tamb�m outra vari�vel do tipo char chamada letra_a atribuindo-lhe o valor
'a'.
 */

	int main()
{
	char letra , a , letra_a = a;
	
	printf("    Atribua uma letra para a variavel: ");
	scanf("%c", &letra);
	
	printf("\n  o valor atribuido foi: %c", letra);
	
	printf("\n  o valor pre-atribuido para a segunda variavel foi: %c", letra_a);	

	
	return 0;
}