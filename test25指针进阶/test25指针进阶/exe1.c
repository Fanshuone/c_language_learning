#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//int main()
//{
//	char* p = "abcdef"; // 把字符串首字符a的地址赋值给了p
//	// const char* p = "abcedf";
//	printf("%s\n", p);
//	printf("%c\n", *p);
//
//	//*p = 'w'; error
//
//	return 0;
//}

//int a = 3;
//void test_a()
//{
//	printf("a=%d\n", a);
//}
//int main()
//{
//	printf("a=%d\n", a);
//	a = 10;
//	printf("a=%d\n", a);
//	test_a();
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%u\n", sizeof arr);
//	
//	int(*p)[10] = &arr;
//
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p1)[10] = &arr1;
//	int* p2 = arr1;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//		printf("%d ", p2[i]);
//	}
//
//	
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(*p1+i)); // p是指向数组的， *p其实相当于数组名，数组名又相当于首元素的地址，所有*p是首元素的地址
//		printf("%d\n", (*p1)[i]); 
//	}
//
//	return 0;
//}

void print1(int arr[3][5],int r,int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for ( j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			
			//printf("%d ", *(*(p+i)+j));
			//printf("%d ", (*(p + i))[j]);
			printf("%d ", p[i][j]);
		}
		
		printf("\n");
	}
}

int main()
{
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	printf("\n");
	print2(arr, 3, 5);  // arr数组名，表示首元素的地址。二维元素的首元素是它的第一行
	return 0;
}