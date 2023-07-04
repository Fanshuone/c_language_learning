#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void Swap(int* x, int* y) {
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//// 当实参传递给形参的时候，形参是实参的一份临时拷贝
//// 对形参的修改不会影响到实参
//
//int main() {
//	int a = 0;
//	int b = 0;
//	/*int* ap = &a;
//	int* bp = &b;*/
//	scanf("%d %d", &a, &b);
//	printf("交换前：a = %d, b = %d\n", a, b);
//	//Swap(ap, bp); // a 和 b 是实参
//	Swap(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}
//


//int main() {
//	char a = "";
//	a = getchar();
//	printf("%c\n", a);
//	putchar(a);
//
//	return 0;
//}

//int main() {
//    int i = 0;
//    int j = 0;
//    int a = 0;
//    int b = 10;
//    //这里打印多少个hehe?
//   
//    for (i = 0; i < 10; i++)
//    {
//        for (j = 0; j < 10; j++)
//        {
//            int a = 0;
//            int b = 100;
//            printf("hehe ");
//            
//            /*i = i + 2;*/
//            a++;
//            printf("%d ", a);
//            printf("%d  ", b);
//            
//        }
//        
//        
//    }
//    printf("%d\n", i);
//    printf("%d\n", a);
//    printf("%d\n", b);
//     
//    return 0;
//    
//}

//int get_arr_element(int arr[]) 
//{
//	int len = sizeof(arr) / sizeof(arr[0]);  
//	printf("len = %d ", len);
//	int i = 0;
//	for (i; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//int main() {
//	int arr[] = { 0, 1, 2, 3 };
//	get_arr_element(arr);
//	return 0;
//}


// 函数声明定义
//int Add(int x, int y);
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}
//
//int Add(int x, int y) {
//	return x + y;
//}

//#include "add.h"
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = Add(a, b);
//	printf("%d", ret);
//	return 0;
//}


int main()
{
	int a = 2;
	switch (a)
	{
	default:
		printf("de\n");
	case 1:
		printf("1\n");
	
	
	case 2:
		printf("2\n");
	case 3:
		printf("3\n");

	
	}
	return 0;
 }

















