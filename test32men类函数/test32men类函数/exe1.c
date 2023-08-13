#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
void* my_mencpy(char* des, char* sor, int bytes)
{
	char* dest = (char*)des;
	char* sorc = (char*)sor;
	while (bytes--)
	{
		*dest++ = *sorc++;
	}
	return des;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int arr1[10] = { 0 };
	/*memcpy(arr1, arr, 20);
	for (int i = 0; i < 5; i++)
	{
		printf("%d", arr1[i]);
	}*/

	my_mencpy(arr1, arr, 20);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}