/* Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário
(sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa de-
ve imprimir uma mensagem informando se o número sorteado é maior ou menor
que a tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade
de tentativas feitas. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int
main (void)
{
	unsigned int randn, guessed,  attempts;

	srand(time(NULL));
	
	attempts = 0;
	randn = rand() % 101;

	while (1) {
		printf("%u\n", randn);
		scanf(" %u", &guessed);
		
		attempts++;

		if (guessed == randn) {
			printf("parabens!!!, voce tentou %u vezes\n", attempts);
			break;
		}
		else if (guessed < randn) 
			puts("o número é maior");
		else
			puts("o número é menor");

	}

	return 0;
}
