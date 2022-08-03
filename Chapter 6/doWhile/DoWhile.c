// DoWhile.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0, num;

	do
	{
		printf("더할 숫자를 입력하거나 0을 입력하여 프로그램을 종료하세요. >> ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	printf("입력한 숫자들의 합은 %d입니다.", sum);

	return 0;
}