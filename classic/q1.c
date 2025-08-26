/* Fazer um programa no qual o usuário vai entrando sucessivamente com valores
(números reais) positivos ou nulos. Quando o usuário entrar com um valor negati-
vo, o programa para de pedir valores e calcula a média dos valores já fornecidos
(excluindo o último número negativo) */

#include <stdio.h>

int
main (void)
{
	double total, temp;
	unsigned int i;
	
	i = total = 0;

	while (1) {
		puts("Insira um valor:");
		scanf("%lf", &temp);
	       	
		if (temp < 0) break;

		i++;
		total += temp;

	}

	printf("media: %lf\n", total / i);

	return 0;
}		
