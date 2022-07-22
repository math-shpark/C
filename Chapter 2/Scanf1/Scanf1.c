// Scanf1.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("첫 번째 정수를 입력하세요. >> ");

	scanf("%d", &num1); // 첫 번째 정수 입력

	printf("두 번째 정수를 입력하세요. >> ");

	scanf("%d", &num2); // 두 번째 정수 입력

	result = num1 + num2;

	printf("두 정수의 덧셈 결과는 %d입니다.", result);

	return 0;
}