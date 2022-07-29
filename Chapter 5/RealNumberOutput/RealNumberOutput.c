// RealNumberOutput.c

#include <stdio.h>

int main(void)
{
	double n1 = 0.1234, n2 = 0.000012345678;

	printf("%f \n", n1);
	printf("%e \n", n1);
	printf("%g \n", n1);

	printf("%f \n", n2);
	printf("%e \n", n2);
	printf("%g \n", n2);

	return 0;
}