#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
typedef unsigned int uint;

//static ���ξֲ����� ����ȫ�ֱ��� ���κ���
void test() {
	static int a = 1;
	a++;
	printf("%d", a);
}

extern int g_val;
extern int Add(int x, int y);
int main() {
	unsigned int num1 = 0;
	uint num2 = 0;
	register int num3 = 0; // ���齫��0 ����ڼĴ�����
	while (num1 < 10)
	{
		test();
		num1++;
		num1 += 1;
	}
	printf("%d\n", g_val);
	int z = Add(num1, num2);
	printf("\n%d\n", z);

	return 0;
}


