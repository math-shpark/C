// IntegerInput.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	printf("정수 3개를 입력하세요. >> ");
	scanf("%d %o %x", &n1, &n2, &n3);

	printf("입력된 정수를 10진수로 변환한 결과입니다. \n");
	printf("%d %d %d", n1, n2, n3);

	return 0;
}