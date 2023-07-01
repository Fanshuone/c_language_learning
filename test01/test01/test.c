#define _CRT_SECURE_NO_WARNINGS
// c 语言中一定要有main函数 ————主函数
// main函数是程序的入口
#include <stdio.h>  
//int main(){
//	printf("hello kerwin"); // printf是一个库函数， 专门用来打印数据
//	return 0;
//}


//int main() {
//	printf("%zu\n", 100);
//	printf("%zu\n", sizeof(100));
//    printf("%zu\n", sizeof(char));
//    printf("%zu\n", sizeof(short));
//    printf("%zu\n", sizeof(int));
//    printf("%zu\n", sizeof(long));
//    printf("%zu\n", sizeof(long long));
//    printf("%zu\n", sizeof(float));
//    printf("%zu\n", sizeof(double));
//    printf("%zu\n", sizeof(long double));
//	return 0;
//}


//int main(){
//	int age = 20;
//	double price = 66.6;
//	return 0;
//}

// 变量和常量的概念
// 变量分为局部变量和全局变量
//int main() {
//	short age = 20;
//	int high = 180;
//	double weight = 88.5;
//
//
//	return 0;
//}

//int main() {
//	int num1 = 0; // 变量初始化
//	int num2 = 0;
//	scanf_s("%d %d", &num1, &num2); // 输入函数
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}
//

// 声明来自外部的符号
extern int a;
int main() {
	printf("%d", a);
	return 0;
}














