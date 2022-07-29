// StringOutput.c

#include <stdio.h>

int main(void)
{
	printf("%s %s %s \n", "ABC", "DEF", "GHI");
	printf("%5s%-5s%5s", "ABC", "DEF", "GHI");

	return 0;
}