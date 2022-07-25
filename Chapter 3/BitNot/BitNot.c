// BitNot.c

#include <stdio.h>

int main(void)
{
	int num = 20; // 00000000 00000000 00000000 00010100

	printf("20의 NOT 연산 결과 : %d", ~num);

	return 0;
}