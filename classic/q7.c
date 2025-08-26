/* Fazer uma função que receba 3 números reais como parâmetros, A, B e C, e os
ordene de tal forma que, ao final da função, A contenha o menor número e C o
maior. Em seguida, fazer um programa que receba 3 números do usuário, chame a
função e mostre os números ordenados */

#include <stdio.h>


void
inverte (double * x, double * y)
{
	double temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void
ordena (double * a, double * b, double * c)
{
	while (1) {
		if (*a < *b) inverte(a, b);

		else if (*b < *c) inverte(b, c);

		else break;
	}
}

int
main (void)
{
	double a, b, c;
	
	puts("insira tres valores");

	scanf("%lf %lf %lf", &a, &b, &c);

	ordena(&a, &b, &c);

	printf("a: %lf\nb: %lf\nc: %lf\n", a, b, c);
	
	return 0;
}
