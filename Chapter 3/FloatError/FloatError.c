// FloatError.c

#include <stdio.h>

int main(void)
{
	float num = 0.0;

	for (int i = 0; i < 100; i++)
	{
		num += 0.1;
	}

	printf("0.0에 0.1을 100번 더하면 %f 값이 출력됩니다.", num);

	return 0;
}