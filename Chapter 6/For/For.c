// For.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int sum = 0;
	int num;

	printf("10���� ������ ���� ����ϴ� ���α׷��Դϴ�! \n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%d��° ���ڸ� �Է����ּ���. >> ", i);
		scanf("%d", &num);
		sum += num;
	}

	printf("�Է��Ͻ� 10�� ������ ���� %d�Դϴ�.", sum);

	return 0;
}