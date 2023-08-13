#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
//char* my_strcpy(char* des, const char* sor)
//{
//	char* st = des;
//	while (*des++=*sor++)
//
//	*des = *sor;
//	return st;
//}
//int main()
//{
//	char arr[10] = {0};
//	
//	
//	//arr="zhangsan"  // error arr数组名是地址，地址是一个常量，不能被赋值
//	printf("%s \n", arr);
//
//
//	char arr1[] = "abcdef";
//
//	
//	
//	char arr2[20] = { 0 };
//	my_strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//
//
//	return 0;
//}

//void test(int x)
//{
//	assert(x);
//	printf("asdf\n");
//}
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	int shorter = (int)strlen(str1) < (int)strlen(str1) ? (int)strlen(str1) : (int)strlen(str1);
//	int compare_length = 0;
//	while (compare_length<=shorter)
//	{
//		
//		if (*str1 != *str2)
//		{
//			return *str1 - *str2;
//		}
//		str1++;
//		str2++;
//		compare_length++;
//	}
//	
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	test(a);
//
//	char arr1[20] = "zhangsgg";
//	char arr2[] = "zhangsg";
//
//	printf("%d\n", strcmp(arr1, arr2));
//
//	int cmp = my_strcmp(arr1, arr2);
//	printf("%d\n", cmp);
//
//	/*char arr3[4] = { 0 };
//	strcpy(arr3, "asdff");*/
//	
//
//	char arr4[20] = "abcd";
//	char arr5[] = "hallo bit";
//	strncpy(arr4, arr5, 15);
//	printf("%s\n",arr4);
//	return 0;
//}


//int main()
//{
//	char* p = "zhangpengwei@bitedu.tech";
//	const char* sep = ".@t";
//
//	char arr1[] = "abcdefg@hijk.lmn.";
//	char arr[30];
//	char* str = NULL;
//	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
//	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//
//	for (str = strtok(arr1, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//}


int main()
{
	FILE* pf = fopen("text.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));

	}

	int a = isdigit('m');
	printf("%d\n", a);
}