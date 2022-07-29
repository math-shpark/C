// RealNumberInput.c

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	float n1;
	double n2;
	long double n3;

	printf("실수 3개를 입력하세요. >> ");
	scanf("%f %lf %Lf", &n1, &n2, &n3);

	printf("입력된 실수입니다. \n");
	printf("%f %f %Lf", n1, n2, n3);
}