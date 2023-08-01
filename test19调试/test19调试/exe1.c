#include <stdio.h>
#include <assert.h>
#define _CRT_SECURE_NO_WARNINGS

int test()
{
	int x = 11;
	int y = 111;
	return x + y;
}

void my_strcpy(char* dest, char* src)
{
	// assert 判断为假的时候才开始运行
	assert(src != NULL);
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = *src;
} 

int num = 10;

void print()
{
	printf("%d ", num);
}

int main()
{
	int i = 0;
	int b = 10;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", i);
	}

	int ret = test();


	char arr1[20] = "XXXXXXXXXXXXXXXX";
	char arr2[] = "hallo bit";

	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	printf("arr2 = %s\n", arr2);
	//int* p = NULL;
	my_strcpy(arr1, arr2);
	//my_strcpy(arr1, p);
	printf("%s\n", arr1);

	printf("%d \n", num);
	num = 100;
	printf("%d \n", num);

	print();
	
	// const 修饰指针

	int* const p = &num;
	printf("*p = %d \n", *p);
	printf("&num = %p\n", &num);
	printf("p = %p \n", p);
	printf("num=%d\n", num);
	*p = 20;
	printf("*p = %d \n", *p);
	printf("p = %p \n", p);
	printf("num=%d\n", num);
	//p = *i error

	const int* p1 = &num;
	printf("*p1 = %d \n", *p1);
	p1 = &i;
	printf("*p = %d \n", *p1);
	//*p1 = 20; error

	const int* const p2 = &num;

	int* p2 = NULL;
	//*p2 = 20; error

	int a = 2;
	int c = a;
	printf("%d %d", a, c);
	a = 3;
	printf("%d %d", a, c);
	a = 4660;
	a = 0x44332211;  //反着存
	char* pc = (char*)&a;
	*pc = 0;
	printf("a = % x", a);
	double d = 3.12;
	a = 3 + d;
	int* p3 = &a;
	printf("%p %p\n", p3, p3+1);
	printf("%p %p\n", p3, p3++);
	char arr3[10] = "abc";
	char* p4 = arr3;
	int judge = (*p4 == 'a');
	printf("judge = %d\n", judge);
	int e = -10;
	printf("%u\n", (unsigned int)e);
	short f = -10;
	int g = 0x11223344;
	char* p5 = &g;
	printf("%p\n", p5);
	printf("%X\n", *p5);
	printf("%p\n", p5+1);
	printf("%X\n", *(p5+1));
	return 0;
}

