#include <stdio.h>
#include <corecrt_math.h>
#define _CRT_SECURE_NO_WARNINGS
//void test(int a[])
//{
//	static int e = 10;
//	e++;
//	printf("%d\n", e);
//}
//int main()
//{
//	short a = 32767;
//	short b = 2;
//	short c = a + b;
//	char d = 0xb6;
//	b = 0xb600;
//
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	test(arr);
//	test(arr);
//	
//
//	printf("%d\n", b = a=2);
//	printf("%d\n", '\0');
//
//	const int e = 10;
//	const int* const p = &e;
//	printf("*p = %d\n", *p);
//	int** pp = &p;
//	**pp = 152;
//	printf("*p = %d\n", *p);
//
//	a = b;
//	printf("a = %p", &a);
//	printf("b = %p\n", &b);
//
//	int g = 2;
//	int f = pow(g, 3);
//	printf("%d\n", f);
//	printf("%d\n", pow(g,3));
//	printf("%f\n", pow(g,3));
//	printf("%d", pow(3, 4));
//	return 0;
//}


struct Person {
	char name[20];
	int age;
};

int main() {
	struct Person people[3] = {
		{"Alice", 25},
		{"Bob", 30},
		{"Charlie", 35}
	};

	// 打印结构体数组的元素
	for (int i = 0; i < 3; i++) {
		printf("Person %d:\n", i + 1);
		printf("Name: %s\n", people[i].name);
		printf("Age: %d\n", people[i].age);
		printf("\n");
	}

	char arr[] = "fanshu";
	printf("%d\n", &arr[0] > &arr[1]);
	printf("%d\n", &arr[0] < &arr[1]);
	return 0;
}
