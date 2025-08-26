/* Faça um programa que, dado um valor em reais (sem centavos), mostre a menor
combinação existente de notas (R$ 200, 100, 50, 20, 10, 5 e 2) para esse valor */

#include <stdio.h>


int
main (void) 
{
	int din, n200, n100, n50, n20, n10, n5, n2;
	
	n200 = n100 = n50 = n20 = n10 = n5 = n2 = 0;

	puts("Insira o valor em R$ (sem os centavos)");
	scanf("%d", &din);

	while (din > 0) {
		
		if(!(din % 200)) {
			n200++;
			din -= 200;
		}
		
		else if (!(din % 100)) {
			n100++;
			din -= 100;
		}

		else if (!(din % 50)) {
			n50++;
			din -= 50;
		}

		else if (!(din % 20)) {
			n20++;
			din -= 20;
		}

		else if (!(din % 10)) {
			n10++;
			din -= 10;
		}

		else if (!(din % 5)) {
			n5++;
			din -= 5;
		}

		else if (!(din % 2)) {
			n2++;
			din -= 2;
		}

		else din--;
	}

	printf("R$200: %d | R$100: %d | R$50: %d | R$20: %d | R$10: %d | R$5: %d | R$2: %d\n", 
			n200, n100, n50, n20, n10, n5, n2);

	return 0;
}


	
