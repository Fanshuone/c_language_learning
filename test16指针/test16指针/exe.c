#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void test3(int** arr)
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr + i)+j));
//		}
//		printf("\n");
//	}
//}

void test3(int* arr[])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//printf("%d ", arr[i][j]);
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}

void test2(int arr[3][4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
//void test1(int* arr[])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//}

void test1(int** arr)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		printf("%d ", *arr[i]);
		printf("%d ", **(arr+i));
	}
	printf("\n");
}

int main()
{
	
	int a = 10;
// Ұָ��
	// pû�г�ʼ��������ζ��û����ȷ��ָ��
	// һ���ֲ�������û�г�ʼ�����ŵ������ֵ
	// �Ƿ������ڴ棬�����p����Ұָ��
	/*int* p;
	*p = 10;*/

	int* p2 = NULL;
	p2 = &a;
	if (p2 != NULL)
	{
		*p2 = 100;
	}

	int arr1[10] = { 1 };
	printf("%p, %d\n", &arr1[0],arr1[0]);
	printf("%p, %d\n", &arr1[1], arr1[1]);

	float values[5];
	float* vp;
	for (vp = &values[0]; vp < &values[5];)
	{
		*vp++ = 0;
	}

	// �����±��д��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr1[i] = 10;
	}
	int* p = &arr1[0];
	for (i = 0; i < 10; i++)
	{
		//*(p++) = 1;
		*(p + i) = 1;
	}

	int len = strlen("asfaf");  // ����������ĸ�ĵ�ַ
	printf("len = % d\n", len);

	len = my_strlen("asfaf");
	printf("len = % d\n", len);


    //  ppb ��һ������ָ�����
	//  int* ��˵�� ppb ָ����� int* ���ͣ� ����� * ��ʾ����ָ��
	int b = 2;
	int* pb = &b;
	int** ppb = &pb;
	**ppb = 5;
	printf("b = %d\n", b);


	a = 10;
	b = 20;
	int c = 30;
	int arr2[10] = { 0 };
	int* pa = &a;
	pb = &b;
	int* pc = &c;
	// parr ���Ǵ��ָ�������
	// paar - ָ������ 
	int* parr[10] = { &a, &b,&c };
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *parr[i]);
	}

	test1(parr);

	int arr3[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	test2(arr3);

	int arr4[4] = { 1,2,3,4 };
	int arr5[4] = { 2,3,4,5 };
	int arr6[4] = { 3,4,5,6 };
	int* parr1[3] = { arr4,arr5,arr6 };

	test3(parr1);
	return 0;
}


int my_strlen(char* s)
{
	int count = 0;
	while (*(s+count) != '\0')
	{
		count++;
	}
	return count;
}