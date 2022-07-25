// BitLeftShift.c

#include <stdio.h>

int main(void)
{
	int num = 20; // 00000000 00000000 00000000 00010100

	int left1 = num << 1; // 00000000 00000000 00000000 00101000
	int left2 = num << 2; // 00000000 00000000 00000000 01010000
	int left3 = num << 3; // 00000000 00000000 00000000 10100000

	printf("20À» ¿ÞÂÊÀ¸·Î 1Ä­ ÀÌµ¿ : %d\n", left1);
	printf("20À» ¿ÞÂÊÀ¸·Î 2Ä­ ÀÌµ¿ : %d\n", left2);
	printf("20À» ¿ÞÂÊÀ¸·Î 3Ä­ ÀÌµ¿ : %d\n", left3);

	return 0;
}