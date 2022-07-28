// SizeOf.c

#include <stdio.h>

int main(void)
{
	char c = 10;
	int i = 1050;
	double d = 3.14159;

	printf("c의 크기 : %d\n", sizeof(c));
	printf("i의 크기 : %d\n", sizeof(i));
	printf("d의 크기 : %d\n", sizeof(d));

	printf("size of char : %d\n", sizeof(char));
	printf("size of int : %d\n", sizeof(int));
	printf("size of long : %d\n", sizeof(long));
	printf("size of long long : %d\n", sizeof(long));
	printf("size of float : %d\n", sizeof(float));
	printf("size of double : %d\n", sizeof(double));

	return 0;
}