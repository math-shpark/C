// DoWhile.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int sum = 0, num;

	do
	{
		printf("���� ���ڸ� �Է��ϰų� 0�� �Է��Ͽ� ���α׷��� �����ϼ���. >> ");
		scanf("%d", &num);
		sum += num;
	} while (num != 0);

	printf("�Է��� ���ڵ��� ���� %d�Դϴ�.", sum);

	return 0;
}