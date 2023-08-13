#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include < stdlib.h >
#include <string.h>
//void choose_sort(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = i+1; j < sz; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				int tem = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tem;
//			}
//		}
//	}
//}

int cmp_int(const void* e1, const void* e2)
{
	if (*(int*)e1 > *(int*)e2)
	{
		return 1;
	}
	else if(*(int*)e1 == *(int*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

void bubble_sort(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		int flag = 1;
		for (int j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tem = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tem;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
}
void test2()
{
	struct Stu st[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25} };
	int sz = sizeof(st) / sizeof(st[0]);
	qsort(st, sz, sizeof(st[0]), cmp_by_name);
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n",st[i].name);
		
	}

}
int my_compare(const void* e1, const void* e2)
{
	return 0;
}

void my_qsort(void* base, unsigned int num, unsigned int width, int(*compare)(const void* e1, const void* e2))
{
	for (int i = 0; i < num; i++)
	{
		int flag = 1;
		for (int j = 0; j < num - 1 - i; j++)
		{
			char* e1 = (char*)base + width * j;
			char* e2 = (char*)base + width * (j + 1);
			int judge = compare(e1,e2);
			if (judge<0)
			{
				for (int k = 0; k < width; k++)
				{
					char tem = *(e1 + k);
					*(e1 + k) = *(e2+k);
					*(e2 + k) = tem;
					
					flag = 0; 
				}
				
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 2,3,1,5,6,6,7,8,4,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr,sz);

	/*qsort(arr,sz,sizeof(arr[0]),cmp_int);*/
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}

	test2();
	int arr1[] = { 2,3,1,15,16,16,17,18,14,10,1 };
	my_qsort(arr1, sz, sizeof(arr1[0]), cmp_int);

	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(arr1 + i));
	}
	return 0;
}




