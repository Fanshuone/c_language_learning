#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "abcdefg";
//	printf("%zu\n", sizeof(arr1));  // sizeof��б��0��������� 
//	//int i = 0;
//	int len = strlen(arr1);
//	//int count = (i + len - 1) / 2;
//	int left = 0;
//	int right = len - 1;
//	for (left = 0; left<right; left++)
//	{
//		
//		char tem = arr1[left];
//		arr1[left] = arr1[right];
//		arr1[right] = tem;
//		left += 1;
//		right -= 1;
//		
//	}
//	printf("%s", arr1);
//	return 0;
//
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		printf("%d", i);
//	}
//}

//int SumDigit(int num)
//{
//	int remain = num % 10;
//	if (num < 10)
//	{
//		return num;
//	}
//	return remain + SumDigit(num / 10);
//}
//
//int main()
//{
//	int num = 99;
//	int sum = SumDigit(num);
//	printf("%d", sum);
//	return 0;
//}

// sizeof ��һ��������
// ����������������ͣ���ռ�ռ�Ĵ�С������ע�ڴ��д�ŵľ�������
//
// strlen ��һ���⺯������ר�����ַ������ȵģ�ֻ������ַ���
// �Ӳ���������ַ�Ⱥ�һֱ��\0, ͳ��\0֮ǰ���ֵ��ַ��ĸ���


//int main()
//{
//	char str[] = "hallo bit";
//	printf("%d %d", sizeof(str), strlen(str));
//
//	return 0;
//}

// ��ַ��һ������ֵ�����ܸ���
int main()
{
	int arr1[] = {1, 3, 4, 5, 7};
	int arr2[] = { 2,4,6,8,0 };
	
	return 0;
}