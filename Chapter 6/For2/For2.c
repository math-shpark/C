// For2.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double sum = 0;
	double input = 0.0;
	int count = -1;

	for (; input >= 0;)
	{
		sum += input;

		printf("평균을 구하고자 하는 숫자를 입력하거나 음수를 입력하여 프로그램을 종료하세요. >> ");
		scanf("%lf", &input);

		count++;
	}

	printf("입력하신 숫자들의 평균은 %lf입니다.", sum / count);

	return 0;
}