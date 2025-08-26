/* Fazer uma função que recebe um dia, um mês e um ano como parâmetros e retor-
na o número de dias desde o início daquele ano. Para o dia 1º de janeiro de qual-
quer ano, a função deve retornar 1. Para o dia 31 de dezembro, ela deve retornar
365 ou 366, dependendo de o ano ser ou não bissexto. Um ano é bissexto quando
é múltiplo de 400 ou também quando é múltiplo de 4 e não múltiplo de 100. */

#include <stdio.h>

int
main (void)
{
	int dia, mes, ano, tdias;

	puts("insira uma data no formato dd/mm/yyyy");

	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	tdias = dia;

	switch (mes) {
		case 12:
			tdias += 30;
		case 11:
			tdias += 31;
		case 10:
			tdias += 30;
		case 9:
			tdias += 31;
		case 8:
			tdias += 31;
		case 7:
			tdias += 30;
		case 6:
			tdias += 31;
		case 5:
			tdias += 30;
		case 4:
			tdias += 31;
		case 3:
			if ((ano % 400 == 0 || ano % 4 == 0) && ano % 100 != 0) 
				tdias += 29;
			else
				tdias += 28;
		case 2:
			tdias += 31;
	
	}

	printf("quantidade de dias: %d\n", tdias);

	return 0;
}

