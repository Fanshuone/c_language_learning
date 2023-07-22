#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
int main()
{
	char a = '1';
	char b = '0';
	int minus = a - b;
	printf("%d", minus);
	printf("%d\n", minus);
	printf("%d\n", '0'+1);
	printf("%c\n", '0'+1);
	printf("%d \n", 1+'0');
	printf("%c\n", 1 + '0');
	printf("%c\n", 55 );
	a = 55+'0';
	printf("%c\n", a);
	printf("%c\n", 55 + '0');
	a = 55;
	printf("%c\n", a);
	return 0;
}