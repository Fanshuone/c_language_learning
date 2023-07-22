#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main()
//{
//	char arr1[] = "abcdefg";
//	printf("%zu\n", sizeof(arr1));  // sizeof将斜杠0算进数组内 
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

// sizeof 是一个操作符
// 用来计算变量（类型）所占空间的大小，不关注内存中存放的具体内容
//
// strlen 是一个库函数，是专门求字符串长度的，只能针对字符串
// 从参数给定地址先后一直找\0, 统计\0之前出现的字符的个数


//int main()
//{
//	char str[] = "hallo bit";
//	printf("%d %d", sizeof(str), strlen(str));
//
//	return 0;
//}

// 地址是一个常量值，不能更改
int main()
{
	int arr1[] = {1, 3, 4, 5, 7};
	int arr2[] = { 2,4,6,8,0 };
	
	return 0;
}