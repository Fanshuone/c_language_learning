#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//int main() {
//	int a, b;
//	while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//		// 64 位输出请用 printf("%lld") to
//		// printf("%d\n", a + b);
//		int arr1[a];
//		int arr2[b];
//		int i = 0;
//		while (i < a) {
//			scanf("%d", &arr1[i]);
//			i++;
//		}
//		i = 0;
//		while (i < b) {
//			scanf("%d", &arr2[i]);
//			i++;
//		}
//		i = 0;
//		int n1 = 0;
//		int n2 = 0;
//		while (i < a + b) {
//
//			if (arr1[n1] < arr2[n2]) {
//				if (n1 == a) {
//					for (n2; n2 < b; n2++) {
//						// printf("2\n");
//						printf("%d ", arr2[n2]);
//					}
//					break;
//				}
//				printf("%d ", arr1[n1]);
//				n1++;
//				i++;
//			}
//			else {
//				if (n2 == b) {
//					for (n1; n1 < a; n1++) {
//						// printf("1");
//						printf("%d ", arr1[n1]);
//					}
//					break;
//				}
//				printf("%d ", arr2[n2]);
//				n2++;
//				i++;
//			}
//
//		}
//
//	}
//	return 0;
//}
typedef void(*pf_t)(int);

void test(int (*arr)[5])
{
	printf("%d", **arr);
}

void add()
{
	printf("这里是add函数\n");
}

void ret_add(void (**p)())
{
	(*p)();
	printf("打印出add函数\n");
}
int main()
{
	char* p = "abcdef";  //把字符串的首字符a的地址，赋值给你p
	printf("%s", p);
	
	int arr[] = { 1,2,3 };
	printf("%d ", sizeof & arr);

	int(*p1)[3] = &arr;
	int(*p2)[3] = (int (*) [3])arr;
	
	int* p3 = (int*)p;


	int arr1[3][5] = { 0 };
	test(arr1);


	void (* signal(int, void(*)(int))) (int);

	pf_t signal(int, pf_t);
	

	void (*p4[4])() = { add,add,add,add };

	ret_add(p4);

	void (*p5)() = add;
	(*p5)();
	(*****p5)();

	void(*(*p6)[4])() = &p4;

	(**p6)();

	int arr2[] = { 0,1,2,3 };

	int(*p7)[] = &arr2;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", *(*(p7)+i));
	}
	
	return 0;
}