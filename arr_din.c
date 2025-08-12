/*
Francisco Gabriel de Oliveira Bezerra	12/08/2025

O objetivo eh fazer um programa que solicite ao usuario que
digite uma sequencia de numeros reais nao nulos. Quando o
usuario digitar zero, entende-se que ele concluiu a entrada
dos dados.
Apos a entrada dos dados, o programa deve calcular e imprimir
as seguintes informacoes:
1) A media aritmetica dos numeros digitados (sem incluir o
zero final).
2) Quantos dos numeros estao acima e abaixo da media (sem
contar com o zero final.
*/


#include <stdio.h>
#include <stdlib.h>


float
media (float * nums)
{
	int i;
	float sum;

	sum = 0;

	for (i = 0; nums[i]; i++) 
		sum += nums[i];

	return sum / i;
}

int
main (void)
{
	int ab, bl, i, index;
	float md, * nums;
	
	index = 0;
	nums = NULL;
	
	puts("insira quantos numeros que voce quiser, ao final digite 0 para finalizar");
	
	while(1) {
		nums = realloc(nums, sizeof(float) * (index + 1));	
		scanf("%f", nums + index);
		
		if(nums[index] == 0) break;

		index++;
	}

	md = media(nums);
	ab = bl = 0;
	for (i = 0; nums[i]; i++) {
		if (nums[i] > md) ab++;
		else if(nums[i] < md) bl++;
	}
	
	printf("media: %f\nnumeros acima da media: %d\nnumeros abaixo da media: %d\n", md, ab, bl);

	return 0;
}			
