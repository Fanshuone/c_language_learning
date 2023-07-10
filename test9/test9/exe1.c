#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10];
//	char arr[10];
//	double data1[20];
//	double data2[15 + 5];
//	// C99标准之前，数组的大小必须是常量或者常量表达式
//	// C99之后，数组的大小可以是变量，为了支持边长数组
//	int n = 10;
//	//int arr2[n];
//}


//int main()
//{
//	// 不完全初始化, 剩余的元素默认初始化为0
//	int arr[10] = { 1, 2, 3 };
//	// 完全初始化
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch1[10] = { 'a','b','c' };
//	printf("%s\n", ch1);
//	char ch2[10] = "abc";
//	printf("%s\n", ch2);
//}
//

//int main()
//{
//	int arr1[3][2] = { 1,2,3,6,5,4 };
//	printf("%d", arr1[0][0]);
//	int arr2[3][4] = { 1,2,3,4 };
//	int arr3[3][4] = { {1,2},{4,5} };
//	int arr4[][4] = { {2,3},{4,5} };
//	return 0;
//}


// 数组访问越界

//int main()
//{
//	int arr[] = { 1 , 2 , 3 , 4 , 5 };
//	int i = 0;
//	for (i = -1; i <= 10; i += 1)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}

// 数组传参的方法，形参有两种写法
// 1 数组
// 2 指针
//void bubble_sort(int arr[], int sz)
//void bubble_sort(int * arr, int sz)
//{
//	 //趟数
//	int i = 0;
//	int a = sizeof(arr);
//	int b = sizeof(arr[0]);
//	printf("%d \n", a);
//	printf("%d \n", b);
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tem;
//			}
//		}
//	}
//}
//
//int main()
//{
//	q1`1** 
//	int len = sizeof(arr1) / sizeof(arr1[0]);
//	
//	bubble_sort(arr1,len);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}


// 数组名确实能表示首元素的地址
// 但是有两个例外
// 1. sizeof(数组名) 这里的数组名表示整个数组，计算的是整个数组的大小，单位是数组
// 2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址

//int main() 
//{
//	int arr[10] = { 10 };
//	printf("%p\n", arr);  // arr首元素的地址  1同
//	printf("%p\n", arr + 1); //  arr第二个元素的地址
//	printf("%p\n", &arr[0]); // arr首元素的地址 2同
//	printf("%p\n", &arr[0] + 1);  //  arr第二个元素的地址
//	printf("%p\n", &arr);  // 数组的地址  3同
//	printf("%p\n", &arr + 1);  // 跳过整个数组
//
//	return 0;
//}

//int main()
//{
//	int arr1[3][4] = {0};
//	printf("%p\n", &arr1);
//	printf("%p\n", &arr1 + 1);
//	printf("%p\n", &arr1[0]);
//	printf("%p\n", &arr1[0] + 1);
//	printf("%p\n", &arr1[0][0]);
//	printf("%p\n", &arr1[0][0] + 1);
//	return 0;
//}

//int main()
//{
//	int arr1[10] = {0};
//	char arr2[10] = "abc";
//	
//	char arr3[10] = { 'a', 'b', 'c' };
//	char arr4[] = "abc";
//	char arr5[] = { 'a', 'b', 'c' };
//	printf("%p\n", &arr4);
//	char arr6[3] = "abc";
//	printf("%zd", sizeof(arr4)); 
//	return 0; 
//}


//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { {1,2},{3,4,5},{6}};
//	int i = 0;
//	for (i = 0; i <3; i+=1)
//	{ 
//		int j = 0;
//		for (j = 0; j < 4; j += 1)
//		{
//			//printf("%d ", arr1[i][j]);
//			//arr1[i][j] = 1;
//			/*scanf("%d", &arr1[i][j]);
//			printf("%d ", arr1[i][j]); */
//			printf("&arr1[%d][%d] = %p\n", i, j, &arr1[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void arr_test(int arr[])  // []中数字可以随便填，编译器不用
//void arr_test(int * arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void arr_test(int* arr)
//void arr_test(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}

//int main()
//{
//	int i = 0;
//	int arr1[10] = { 1,2,3,4,5,6 };
//	arr_test(arr1);
//	for (i = 0; i > 1; i += 1)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// 数组名确实能表示首元素的地址
// 但是有两个例外
// 1. sizeof(数组名) 这里的数组名表示整个数组，计算的是整个数组的大小，单位是数组
// 2. &数组名，这里的数组名表示整个数组，取出的是整个数组的地址

//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	return 0;
//}

int main()
{
	int arr1[3][4];
	int sz = sizeof(arr1);  
	printf("%d ", sz);
	int sz1 = sizeof(arr1[0]);
	printf("%d ", sz1);
	
	arr1; // 二维数组的数组名也表示数组首元素的地址 表示一行的地址 理解成一维数组
	printf("%p\n", arr1);
	printf("%p\n", arr1 + 1);

	printf("%d\n", sizeof(arr1) / sizeof(arr1[0])); // 行数
	printf("%d\n", sizeof(arr1[0]) / sizeof(arr1[0][0])); // 列数
	printf("------------------------------------------");
	printf("");
	printf(" \n");

	return 0;
}



















