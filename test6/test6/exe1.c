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
//	// 1. ���������
//	int ret = rand()%100;
//	// printf("%d\n", ret);
//	
//	while (1)
//	{	
//		printf("�²����֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game(); // �����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��");
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
	printf("��ע�⣬��ĵ�����60���ڹػ������������������ȡ���ػ�\n");

	scanf("%s", input);
	if (strcmp(input,"������")==0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
