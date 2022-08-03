// For.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0;
	int num;

	printf("10개의 숫자의 합을 계산하는 프로그램입니다! \n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d번째 숫자를 입력해주세요. >> ", i);
		scanf("%d", &num);
		sum += num;
	}

	printf("입력하신 10개 숫자의 합은 %d입니다.", sum);

	return 0;
}