#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>

int main()
{
	char a = 0b11111111;
	printf("%d\n", a);

	unsigned char b = 0b10000000;
	printf("%d\n", b);

	char c = -128;
	printf("%u\n", c);
	char d = 128;
	unsigned int e = -1;
	printf("%d\n", e);

	int f = -25;
	unsigned int g = 2;
	printf("%u\n", f + g);

	f = 2.0;
	printf("%d\n", f);



	return 0;


}