#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main() {
//	if (3 == 3) 
//	{
//		printf("here\n");
//		if (1 == 1) 
//		{
//			printf("Fanshu\n");
//		}
//		else
//		{
//			printf("哈哈");
//		}
//	}
//	else
//	{
//		printf("I'm here");
//	}
//	return 0;
//}
//


//int main() {
//	int i = 0;
//	while (i <= 100)
//	{
//		if (i % 2 == 1) 
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//
//	return 0;
//}

//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	default:
//		printf("输入无效");
//		break;
//	}
//	return 0;
//}


//int main() {
//	int ch = getchar();
//	printf("%c\n", ch);
//	//printf("%d\n", ch);
//	putchar(ch);
//	int ch1 = 0;
//	char a = 'w';
//	while ((ch1 = getchar()) != EOF)
//	{
//		printf("%c\n", ch1);
//		putchar(ch1);
//	}
//	return 0;
//}


//int main() {
//	char password[20] = "";
//	printf("请输入密码: ");
//	scanf("%s", &password);
//	int ch = 0;
//	while ((ch = getchar())!='\n')
//	{
//
//	}
//	printf("请确认密码:(Y/N) ");
//	int ret = getchar();
//	if ('Y' == ret) 
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}


//int main() {
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%.2d\n", month);
//	printf("date=%02d", date);
//	return 0;
//}

//int main() 
//{
//	int id = 0;
//	float c = 0.0;
//	printf("%zu", sizeof c);
//	
//	return 0;
//}



//int main() {
//    double num = 3.14159265358979323846;
//
//    printf("Float number: %.20f\n", num);
//
//    return 0;
//}

//int Add(int c) {
//	return c + 1;
//}
//int main() {
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		int a = 2;
//		int b = Add(a);
//		printf("%d\n", b);
//	}
//}

//
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	scanf("%d %d", &a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int main() {
//	int ch = 0;
//	ch = getchar();
//	printf("%d\n",ch == 'a');
//	printf("%d\n",ch == 97);
//	return 0;
//}

//int main() {
//	int i = 0;
//	for (i;i<10;i++){
//		printf("%d ", i);
//		//i = 12;
//		int b = 22;
//		
//	}
//	printf("==%d\n", i);
//	i = 0;
//	for (i; i < 10; ++i) {
//		printf("%d ", i);
//		//i = 12;
//		int b = 22;
//
//	}
//	int b = 0;
//	for (b = 0;b < 2;b++){
//		printf("%d ", b);
//	}
//	do
//	{
//
//	} while (1);
//	return 0;
//}


//int main() {
//	int i = 0;
//	int n = 0;
//	long ans = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++) {
//		ans = ans * i;
//	}
//	printf("%d", ans);
//	return 0;
//}

//int main() {
//	char arr1[20] = "";
//	char arr2[20] = "";
//	scanf("%s", &arr1);
//	scanf("%s", &arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//#include <Windows.h>
//#include <stdlib.h>
//int main() {
//	Sleep(1000);
//	// 清空屏幕
//	printf("sdafafdasfd");
//	Sleep(3000);
//	system("cls"); //system是一个库函数，可以执行系统命令
//	return 0;
//}

#include <string.h>
//int main() {
//	char arr1[20] = "";
//	char arr2[20] = "";
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	printf("%d\n", arr1 == arr2);  // 比较两个字符串是否相等，不能使用==，而应该使用一个库函数：strcmp
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("strcmp-- %d", strcmp(arr1, arr2)); // 如果返回值为0，表示2个字符串相等
//	return 0;
//}

int main() {
	char arr1[] = "sadfaf";
	char arr2[] = "afdaf";
	printf("%c", arr1[1]);
	return 0;
}