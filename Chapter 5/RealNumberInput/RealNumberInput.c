// RealNumberInput.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float n1;
	double n2;
	long double n3;

	printf("�Ǽ� 3���� �Է��ϼ���. >> ");
	scanf("%f %lf %Lf", &n1, &n2, &n3);

	printf("�Էµ� �Ǽ��Դϴ�. \n");
	printf("%f %f %Lf", n1, n2, n3);
}