// Casting.c

#include <stdio.h>

int main(void)
{
	int n1 = 3, n2 = 4;
	double result;

	result = n1 / n2;
	printf("%.2f\n", result);

	result = (double)n1 / n2;
	printf("%.2f\n", result);

	return 0;
}