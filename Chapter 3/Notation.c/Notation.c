// Notation.c

#include <stdio.h>

int main(void)
{
	int num1 = 0xA5, num2 = 0xB2;
	int num3 = 012, num4 = 032;

	printf("0xA5의 10진수 값은 %d입니다.\n", num1);
	printf("0xB2의 10진수 값은 %d입니다.\n", num2);

	printf("012의 10진수 값은 %d입니다.\n", num3);
	printf("032의 10진수 값은 %d입니다.\n", num4);

	return 0;
}