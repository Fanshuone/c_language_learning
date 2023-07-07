#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include "add.h"

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

// %d ��ӡ�з��ŵ�����
// %u ��ӡ�޷��ŵ�����
//int main()
//{
//	int a = 20;
//	int b = 219;
//	int arr1[10] = { 0,1 };
//	printf("%d\n", b / a);
//	printf("%d\n", b % a);
//	printf("%d\n", 1 / 10);
//	printf("%d\n", arr1[0]);
//	printf("%d\n", arr1[1]);
//	printf("%d\n", arr1[2]);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++; // ����һ���ַ�
//	}
//	return count;
//}
//int my_strlen(char str[])
//{
//	int count = 0;
//	while (str[count] != '\0')
//	{
//		count++;
//		//str++; // ����һ���ַ�
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	{
//		return 0;
//	}
//}
//#include <string.h>
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d", len);
//	return 0;
//}

//long long  Fb(long long n)
//{
//	if (n <= 2)
//		return 1;
//	else
//	{
//		return Fb(n - 1) + Fb(n - 2);
//	}
//}

//long long Fb(int n)
//{
//	long long  a = 1;
//	long long  b = 1;
//	long long  c = 1;
//	int i = 0;
//	for (i = 3; i <= n; i += 1)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	long long  ret = Fb(n);
//	printf("%lld\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 5; i += 1)
//	{
//		printf("%d ", i);
//	}
//	//printf("%d ", i);
//
//	/*for (i = 0; i <= 0; i += 1)
//	{
//		printf("%d ", i);
//	}*/
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	default:
//		printf("hehe\n");
//
//	case 1:
//		printf("1\n" );
//	case 2:
//
//		printf("2\n");
//
//	}
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tem = 0;
//		a = b;
//		b = tem;
//	}
//	if (a < c)
//	{
//		int tem = 0;
//		tem = a;
//		a = c;
//		c = tem;
//	}
//	if (b < c)
//	{
//		int tem = 0;
//		tem = b;
//		b = c;
//		c = tem;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 3;
//	for (i = 3; i <= 100; i += 1)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//
//	}
//
//	printf("%d ", m);
//}

// շת�����
//int Chu(int x, int y)
//{
//	int max = (x > y) ? x : y;
//	int min = (x < y) ? x : y;
//	
//	while (1)
//	{
//		int tem = max % min;
//		if (tem == 0) 
//		{
//			break;
//		}
//		max = min;
//		min = tem;
//	}
//	return min;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int ret = Chu(a, b);
//	printf("%d ", ret);
//	return 0;
//}

//int Num_of_nine(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= n; i += 1)
//	{
//		if (i % 10 == 9)
//			count += 1;
//		if (i / 10 == 9)
//			count += 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Num_of_nine(n);
//	printf("%d", ret);
//	return 0;
//}

//int Get_max(int* p)
//{
//	int i = 0;
//	int max = *p;
//	while (i < 10)
//	{	
//		
//		if (max >= *(p + i))
//		{
//			i += 1;
//				continue;
//		}
//		else
//			max = *(p + i);
//		i += 1;
//	}
//	return max;
//}

//int Get_max(int arr[])
//{
//	int i = 0;
//	int max = arr[0];
//	while (i <= 8) 
//	{
//		if (max>= arr[i + 1])
//		{
//			i += 1;
//			continue;
//		}
//		else
//			max = arr[i + 1];
//		i += 1;
//	}
//	return max;
//}


//int main()
//{
//	int arr1[10] = { 1,22,3333,4,9555,1000000,7,8,9,666666 };
//	int ret = Get_max(arr1);
//	printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			//printf("%d * %d = %d\t", j, i, i * j);
//			printf("%d * %d = %2d  ", j, i, i * j);
//			
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

//void test(int arr[])
//{
//	arr[0] = 3;   // arr[0] -->  *(arr + 0)
//	arr[1] = 4;	  // arr[1] -->  *(arr + 1)
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}

void test(int* px, int* py)
{
	*px = 3;
	*py = 4;
}
int main()
{
	int a = 0;
	int b = 0;
	test(&a, &b);
	return 0;
}