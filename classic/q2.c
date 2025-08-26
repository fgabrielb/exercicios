/* Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e
dois números reais. O programa deve retornar o resultado da operação recebida
sobre estes dois números. Este funcionamento deve ser repetido até que o símbolo
seja algo que não corresponda a nenhuma das quatro operações reconhecidas. */

#include <stdio.h>

int
main (void)
{
	char op;
	double n1, n2;

	while (1) {
		puts("insira uma operação (+, -, /, *) e dois números reais");

		scanf(" %c", &op);
		scanf(" %lf", &n1);
		scanf(" %lf", &n2);
		
		switch (op) {
			case '+':
				printf("= %lf\n", n1 + n2);
				break;

			case '-':
				printf("= %lf\n", n1 - n2);
			     	break;

			case '/':
				printf("= %lf\n", n1 / n2);
				break;

			case '*':
				printf("= %lf\n", n1 * n2);
				break;
			default:
				return 0;
		}
	}
}	
