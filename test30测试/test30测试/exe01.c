#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void test(char* c)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", *(c + i));
	}
}

int main()
{
	int a = 10; 
	int* b = &a;
	int* c = NULL;
	c = b;

	char* p = "abcdef";
	char* p1 = "abcdef";
	test(b);
	p = 0x2222222222222222;

	int d[2][3] = { 0 };
	size_t;
	return 0;
}