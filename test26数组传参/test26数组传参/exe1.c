#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void test(int (*p)[5])
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0;  j< 5; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}

}


int Add(int x, int y)
{
	return x + y;
}

void calc(int (*pf)(int, int))
{
	int a = 3;
	int b = 5;
	int ret = pf(a, b);
	printf("%d\n", ret);
}
int main()
{
	
	int arr[3][5] = { 0 };
	test(arr);

	int arr1[5] = { 0 };
	
	// &������ -ȡ����������ĵ�ַ 
	int(*p)[5] = &arr;  // ����ָ��

	// &������ - ȡ�����Ǻ����ĵ�ַ
	// ���ں�����˵�� &�������ͺ��������Ǻ����ĵ�ַ
	printf("%p\n", &Add);
	printf("%p\n", Add);

	int (*pf)(int, int) = &Add;
	int ret = (*pf)(2, 3);
	int ret1 = pf(2, 3);
	printf("%d\n", ret);
	printf("%d\n", ret1);


	calc(Add);

	int arr2[3][4] = { 0 };
	printf("%d\n", sizeof * (&arr2[0] + 1));
	int arr3[4] = { 0 };
	printf("%d\n", sizeof arr3);

	return 0;
}