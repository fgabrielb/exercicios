/* Desenvolver a função INVERTE que recebe um inteiro como parâmetro e retorna
este número invertido. Ex: 431 retorna 134, -13 retorna -31 */

#include <stdio.h>


int
inverte(int x)
{
	int y;

	y = 0;

	while (x) {
		
		y *= 10;
		y += x % 10;
		x /= 10;
	}

	return y;
}

int
main (void)
{
	int x;

	puts("insira um número");

	scanf("%d", &x);

	printf("%d\n", inverte(x));

	return 0;
}
