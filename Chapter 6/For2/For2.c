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

		printf("����� ���ϰ��� �ϴ� ���ڸ� �Է��ϰų� ������ �Է��Ͽ� ���α׷��� �����ϼ���. >> ");
		scanf("%lf", &input);

		count++;
	}

	printf("�Է��Ͻ� ���ڵ��� ����� %lf�Դϴ�.", sum / count);

	return 0;
}