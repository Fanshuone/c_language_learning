#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a = 0x11223344;
	printf("%d\n", a);
	printf("%x\n", a);
	int b = -0x11223344;
	printf("%d\n", b);
	printf("%x\n", b);
	int c = -1;
	printf("%d\n", c);
	printf("%x\n", c);
	unsigned int d = 0xffffffff;
	printf("%u\n", d);
	printf("%x\n", d);
	double g = 8;
	printf("%d\n", g);
	printf("%f\n",*&g);

	return 0;
}
