// While2.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan, num = 1;

	printf("����Ϸ��� �������� �� ���� �Է��ϼ���. >> ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d x %d = %d\n", dan, num, dan * num);
		num++;
	}

	return 0;
}