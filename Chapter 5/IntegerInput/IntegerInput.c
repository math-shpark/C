// IntegerInput.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	printf("���� 3���� �Է��ϼ���. >> ");
	scanf("%d %o %x", &n1, &n2, &n3);

	printf("�Էµ� ������ 10������ ��ȯ�� ����Դϴ�. \n");
	printf("%d %d %d", n1, n2, n3);

	return 0;
}