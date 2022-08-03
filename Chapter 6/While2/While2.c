// While2.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan, num = 1;

	printf("계산하려는 구구단의 단 수를 입력하세요. >> ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d\n", dan, num, dan * num);
		num++;
	}

	return 0;
}