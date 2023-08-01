#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 全局变量，静态变量都是放在静态区
// 全局变量，静态变量不初始化的时候，默认会被初始化为0
// 局部变量，放在栈区，不初始化，默认是随机值

int count_num_of_one(int x)
{
	int prep = 1;
	int count = 0;
	for (int i = 0; i <= 32; i++)
	{
		if (x & prep)
		{
			count++;
		}
		prep <<=  1;
	}
	return count;
}

int my_strlen(const char* arr)
{
	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}

void reverse(char* arr)
{
	int len = strlen(arr);
	int left = 0;
	int right = len - 1;
	for (int i = 0; i <=len/2-1 ; i++)
	{
		char temp = arr[right];
		arr[right] = arr[i];
		arr[i] = temp;
		left++;
		right--;
	}
}
int calcu(int number, int count)
{
	int i = 0;
	int res = 0;
	int temp = number;
	while (i<=count-1)
	{
		i++;
		res += temp;
		temp = temp * ((int)pow(10, 1))+number;
	}
	return res;
}
int main()
{
	/*int a = -10;
	printf("%d\n", a);
	printf("%u\n", a);
	int num = 0;
	int* p = &num;
	scanf("%d", p);*/

	/*int n = count_num_of_one(num);
	printf("%d ", n);*/


	/*char arr1[] = { 0 };
	char arr2[] = { 0 };
	scanf("%s %s", &arr1,&arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr2);*/
	int number = 0;
	int count = 0;
	scanf("%d %d", &number, &count);
	int res = calcu(number, count);
	printf("res=%d\n", res);
	printf("res=%d\n", (int)pow(2,3));

	printf("%d\n", 7 / 2);
	char arr2[10] = {0};
	//scanf("%s", arr2);  // scanf 不能空格读取
	gets(arr2);
	char arr1[] = "hallo bita";
	reverse(arr2);
	printf("%s\n", arr2);

	int one = 0;
	int two = 0;
	int three = 0;
	while (scanf("%d %d %d", &one, &two,&three) == 3)
	{
		if ((one + two > three) && (one + three > two) && (three + two > one))
		{
			if ((one == two) && (one == three))
			{
				printf("Equilateral Triangle\n");

			}
			else if ((one == two) || (one == three) || (two == three))
			{
				printf("Lsosceles Triangle\n");
			}
			else
				printf("Ordinary Triangle\n");
		}
		else
		{
			printf("Not a Triangle\n");
		}
	}

	char arr[] = "hallo bit";
	int len = my_strlen(arr);
	printf("%d\n", len);
	printf("NULL = %d", NULL);
	
	int b = 0;
	int c = 0;
	while (scanf("%d" ,&b)==1)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < b; i++)
		{
			for (j = 0; j < b; j++)
			{
				if (i == j)
				{
					printf("*");
				}
				else if(i+j == b-1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
				
			}
			printf("\n");
		}
	}
	
	
	return 0;
}