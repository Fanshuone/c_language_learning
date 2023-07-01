#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//void menu() {
//	printf("******************+******\n");
//	printf("*******  1. play  *******\n");
//	printf("*******  0. exit  *******\n");
//	printf("*************************\n");
//}
//
//void game() {
//	int guess = 0;
//	// 1. 生成随机数
//	int ret = rand()%100;
//	// printf("%d\n", ret);
//	
//	while (1)
//	{	
//		printf("猜猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main() {
//	int input = 0;
//	srand(((unsigned int)time(NULL)));
//	do 
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); // 猜数字的整个逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main() {
//again1:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again1;
//	return 0;
//}


int main() {
	char input[20] = "";
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在60秒内关机，如果输入我是猪，就取消关机\n");

	scanf("%s", input);
	if (strcmp(input,"我是猪")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
