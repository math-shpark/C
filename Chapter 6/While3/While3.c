// While3.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan = 2;
	int num;

	while (dan < 10)
	{
		num = 1;

		printf("------------%d´Ü------------\n", dan);

		while (num < 10)
		{
			printf("%d x %d = %d\n", dan, num, dan * num);
			num++;
		}

		dan++;
	}

	return 0;
}