#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[10];
//	char arr[10];
//	double data1[20];
//	double data2[15 + 5];
//	// C99��׼֮ǰ������Ĵ�С�����ǳ������߳������ʽ
//	// C99֮������Ĵ�С�����Ǳ�����Ϊ��֧�ֱ߳�����
//	int n = 10;
//	//int arr2[n];
//}


//int main()
//{
//	// ����ȫ��ʼ��, ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int arr[10] = { 1, 2, 3 };
//	// ��ȫ��ʼ��
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


// �������Խ��

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

// ���鴫�εķ������β�������д��
// 1 ����
// 2 ָ��
//void bubble_sort(int arr[], int sz)
//void bubble_sort(int * arr, int sz)
//{
//	 //����
//	int i = 0;
//	int a = sizeof(arr);
//	int b = sizeof(arr[0]);
//	printf("%d \n", a);
//	printf("%d \n", b);
//	
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
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


// ������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
// ��������������
// 1. sizeof(������) �������������ʾ�������飬���������������Ĵ�С����λ������
// 2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ

//int main() 
//{
//	int arr[10] = { 10 };
//	printf("%p\n", arr);  // arr��Ԫ�صĵ�ַ  1ͬ
//	printf("%p\n", arr + 1); //  arr�ڶ���Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]); // arr��Ԫ�صĵ�ַ 2ͬ
//	printf("%p\n", &arr[0] + 1);  //  arr�ڶ���Ԫ�صĵ�ַ
//	printf("%p\n", &arr);  // ����ĵ�ַ  3ͬ
//	printf("%p\n", &arr + 1);  // ������������
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

//void arr_test(int arr[])  // []�����ֿ�����������������
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

// ������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
// ��������������
// 1. sizeof(������) �������������ʾ�������飬���������������Ĵ�С����λ������
// 2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ

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
	
	arr1; // ��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ ��ʾһ�еĵ�ַ ����һά����
	printf("%p\n", arr1);
	printf("%p\n", arr1 + 1);

	printf("%d\n", sizeof(arr1) / sizeof(arr1[0])); // ����
	printf("%d\n", sizeof(arr1[0]) / sizeof(arr1[0][0])); // ����
	printf("------------------------------------------");
	printf("");
	printf(" \n");

	return 0;
}



















