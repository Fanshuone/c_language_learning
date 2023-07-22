#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void num(x)
{
	x = 5;
}

int* test()
{
	int aa = 10;
	return &aa;
}
int main()
{
// 取模两边必须是整数
// c语言深度解剖---蛋哥
	int a =4 *1.1;
	printf("%d\n", a);
	int b = 3 + 1.1;
	printf("%d\n", b);
	printf("%d\n",!b);
	int c = 10;
	int d = -c;
	int e = -d;
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", i);
	}
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", i);
	}

	for (i = 0; i < 5; i+=1)
	{
		printf("%d ", i);
	}
	printf("---------------------\n");
	printf("%d ", i);
	printf("%d ", i++);
	printf("%d ", ++i);
	int arr[10] = { 10 };
	printf("---------------------\n");
	arr[7] = 10;
	printf("%d ", arr[7]);
	printf("%d ", *(arr + 7));
	int f = 10;
	num(f);
	printf("\n%d ", f);
	printf("\n%d ", 1+ ++f);

	int g = 10;
	int h = 0;
	h = g;
	h = h + 100;
	printf("%d %d", h, g);
	
	char ch = 12;
	printf("%c", ch);
	ch = 10;
	printf("%c", ch);
	//scanf("%c", &ch);
	printf("%c", ch);
	int* p = test();
	printf("%d ", *p);
	 
	return 0;
}