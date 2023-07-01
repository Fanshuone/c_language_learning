#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Swap(int* x, int* y) {
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
}

// 当实参传递给形参的时候，形参是实参的一份临时拷贝
// 对形参的修改不会影响到实参

int main() {
	int a = 0;
	int b = 0;
	/*int* ap = &a;
	int* bp = &b;*/
	scanf("%d %d", &a, &b);
	printf("交换前：a = %d, b = %d\n", a, b);
	//Swap(ap, bp); // a 和 b 是实参
	Swap(&a, &b);
	printf("交换后：a = %d, b = %d\n", a, b);
	return 0;
}

