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

	int h = -10;
	unsigned int i = 100;
	unsigned int j = 200;
	printf("%d\n", h > i);
	printf("%d\n", i-j > 0);

	float k = 5.5f;
	printf("%f\n", k);

	return 0;
}
