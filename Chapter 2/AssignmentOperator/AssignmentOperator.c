// AssignmentOperator.c

#include <stdio.h>

int main(void)
{
	int num1 = 3, num2 = 6, num3 = 9;

	num1 += 3;
	num2 *= 2;
	num3 %= 5;

	printf("num1 : %d, num2 : %d, num3 : %d", num1, num2, num3);

	return 0;
}