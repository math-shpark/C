// FloatError.c

#include <stdio.h>

int main(void)
{
	float num = 0.0;

	for (int i = 0; i < 100; i++)
	{
		num += 0.1;
	}

	printf("0.0�� 0.1�� 100�� ���ϸ� %f ���� ��µ˴ϴ�.", num);

	return 0;
}