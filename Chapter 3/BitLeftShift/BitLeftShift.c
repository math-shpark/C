// BitLeftShift.c

#include <stdio.h>

int main(void)
{
	int num = 20; // 00000000 00000000 00000000 00010100

	int left1 = num << 1; // 00000000 00000000 00000000 00101000
	int left2 = num << 2; // 00000000 00000000 00000000 01010000
	int left3 = num << 3; // 00000000 00000000 00000000 10100000

	printf("20�� �������� 1ĭ �̵� : %d\n", left1);
	printf("20�� �������� 2ĭ �̵� : %d\n", left2);
	printf("20�� �������� 3ĭ �̵� : %d\n", left3);

	return 0;
}