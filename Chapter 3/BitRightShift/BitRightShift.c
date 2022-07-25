// BitRightShift.c

#include <stdio.h>

int main(void)
{
	int num = 20; // 00000000 00000000 00000000 00010100

	int right1 = num >> 1; // 00000000 00000000 00000000 00001010
	int right2 = num >> 2; // 00000000 00000000 00000000 00000101
	int right3 = num >> 3; // 00000000 00000000 00000000 00000010

	printf("20을 오른쪽으로 1칸 이동 : %d\n", right1);
	printf("20을 오른쪽으로 2칸 이동 : %d\n", right2);
	printf("20을 오른쪽으로 3칸 이동 : %d\n", right3);

	return 0;
}