// Scanf1.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int result;
	int num1, num2;

	printf("ù ��° ������ �Է��ϼ���. >> ");

	scanf("%d", &num1); // ù ��° ���� �Է�

	printf("�� ��° ������ �Է��ϼ���. >> ");

	scanf("%d", &num2); // �� ��° ���� �Է�

	result = num1 + num2;

	printf("�� ������ ���� ����� %d�Դϴ�.", result);

	return 0;
}