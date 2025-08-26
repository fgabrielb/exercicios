#include <stdio.h>


double
f (double x)
{
	return 5 * x * x * x+ 5 * x - 2;
}

double
deriva (double (*f)(double), double a, double precision)
{
	double delta = 1 / precision;
	
	return (f(a + delta) - f(a)) / delta;
}

double
integra (double (*f)(double), double l1, double l2, double precision)
{
	double i, delta, sum;

	delta = 1 / precision;
	sum = 0;

	for (i = 0; (i + l1) <= l2; i += delta)
		sum += f(l1 + i) * delta;	
	
	return sum;
}

int
main (void)
{
	printf("%lf\n", deriva(f, 5, 1000000000));
	printf("%lf\n", integra(f, 0, 10, 100000));

	return 0;
}
