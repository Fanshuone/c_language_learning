#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100
#define STR "abcdef"
//enum Color
//{
//	// 枚举常量
//	Boy,
//	Girl,
//};
//
//int main() {
//	// 1、字面常量
//	30;
//	3.14;
//	'w'; // 字符常量
//	"abc"; // 字符串常量
//
//	// 2、const 修饰的常变量  在C语言中, const 修饰的 a, 本质是变量，但是不能修改，有常量的属性
//	const int a = 10;
//	printf("%d\n", a);
//   /* a = 20;
//	printf("%d", a);*/ // 报错
//
//	// 3、define 定义的标识符常量
//	printf("%d\n", MAX);
//	int b = MAX;
//	printf("%d\n", b);
//	printf("%s\n", STR);
//	// MAX = 100; 报错
//
//	// 4、枚举常量
//	enum Color p = Boy;
//	printf("--%d\n", Boy);
//	printf("--%d\n", Girl);
//#define Min 10 
//	printf("--%d\n", Min);
//
//	return 0;
//}

//#include <stdio.h>
////举例
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET
//};
////括号中的MALE,FEMALE,SECRET是枚举常量
//int main()
//{
//    //字面常量演示
//    3.14;//字面常量
//    1000;//字面常量
//
//    //const 修饰的常变量
//    const float pai = 3.14f;   //这里的pai是const修饰的常变量
//    //pai = 5.14;//是不能直接修改的！
//
//    //#define的标识符常量 演示
//#define MAX 100
//    printf("max = %d\n", MAX);
//
//    //枚举常量演示
//    printf("%d\n", MALE);
//    printf("%d\n", FEMALE);
//    printf("%d\n", SECRET);
//    //注：枚举常量的默认是从0开始，依次向下递增1的
//    return 0;
//}

//int main() {
//	// char 字符类型
//	char ch = 'w';
//	printf("%d\n", 15);
//	// 字符串  c语言中没有字符串类型
//	char arr1[] = "bit";
//	char arr2[] = { 'b', 'i', 't' };
//	char arr3[] = { 'b', 'i', 't', '\0' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	int len = strlen("abc");
//	printf("%d\n", len);
//	int len1 = strlen(arr1);
//	printf("%d\n", len1);
//	int len2 = strlen(arr2);
//	printf("%d\n", len2);
//	int len3 = strlen(arr3);
//	printf("%d\n", len3);
//	return 0;
//}
//
//


// %d 打印整形
// %c 打印字符
// %s 打印字符串
// %f 打印 float 浮点数
// %lf 打印 double 类型的数据
// %zu 打印sizeof 的返回值
//int main() {
//	printf("aasf\n");
//	printf("%c\n",'a');
//	printf("%s\n","'");
//	printf("\\a\a\a\a\n");
//	printf("%c\n", '\x60');
//	printf("%d\n", strlen("\t\t"));
//	return 0;
//}
//

//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	if (input == 0) {
//		printf("好offer\n");
//	}
//	else {
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000){
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//	
//	return 0;
//}

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1, n2);
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main() {
//	int arr[3] = {1, 2, 3};
//	char arr1[5] = {'b', 'i', 't'};
//	printf("%d\n",arr[0]);
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%c\n", arr1[i]);
//		i++;
//	}
//	printf("%s\n", arr1);
//	char arr3[10] = "hallo";
//	printf("%s\n", arr3);
//	int a = 10;
//	printf("--%d\n", strlen(arr1));
//	printf("--%d\n", strlen(arr3));
//	printf("arr1=%s", arr1);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr1));
//	int arr4[5] = { 1 };
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", sizeof(arr4[0]));
//	printf("%d\n", sizeof(arr4[1]));
//	printf("%d\n", arr4[2]);
//
//	//int b = 3.15; // 字面浮点数，默认为double类型
//	int c = (int)3.14;
//	
//	printf("%d\n", c);
//
//	int e = 10;
//	int d = 20;
//	int r = c < d ? e : d;
//	printf("%d\n", r);
//
//	return 0;
//}
//


int main() {
	// 逗号表达式是逗号隔开的一串表达式
	// 逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);
	
	printf("%d\n", d);
	printf("%d\n", a);
	return 0;
}