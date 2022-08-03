// While.c

#include <stdio.h>

int main(void)
{
	int num = 0;

	while (num < 3)
	{
		printf("현재 num에 저장된 값은 %d입니다.\n", num);
		num++;
	}
}