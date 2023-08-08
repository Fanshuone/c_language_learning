#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	char a = 'w';
	printf("%d\n", sizeof (unsigned long long));
	unsigned long long p =(unsigned long long)(&a);

	int b = 10;

	int arr[3] = { 1,2,3 };
	printf("%d\n", **( & arr));
	printf("%p\n", arr);
	printf("%d\n", *arr);
	printf("%p\n", &arr);
	printf("%d\n", **&arr);
	int arr2[3];
	return 0;
}