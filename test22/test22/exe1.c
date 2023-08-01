#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void reverse(char* start, char* end)
{
	while (1)
	{
		char temp = *end;
		*end = *start;
		*start = temp;
		end--;
		start++;
		if (start >= end)
		{
			return;
		}
	}
	
}

int main()
{
	int b = 0;
	printf("%d\n", b = 15);

	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	char* start = &arr[0];
	/*reverse(start, &arr[len - 1]);*/
	printf("%s\n", arr);
	for (int i = 0; i <= len; i++)
	{
		
		if ((arr[i] == ' ') || (arr[i] == '\0'))
		{
			char* end = &arr[i];
			reverse(start, end-1);
			start = end + 1;
		}
	}
	reverse(&arr, &arr[len - 1]);
	printf("arr = %s\n", arr);

	return 0;
}


