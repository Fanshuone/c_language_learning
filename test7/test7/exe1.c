#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int* x, int* y) {
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

// ��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
// ���βε��޸Ĳ���Ӱ�쵽ʵ��

int main() {
	int a = 0;
	int b = 0;
	/*int* ap = &a;
	int* bp = &b;*/
	scanf("%d %d", &a, &b);
	printf("����ǰ��a = %d, b = %d\n", a, b);
	//Swap(ap, bp); // a �� b ��ʵ��
	Swap(&a, &b);
	printf("������a = %d, b = %d\n", a, b);
	return 0;
}

