#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>
struct Stu
{
	char name[20];
	int age;
	double score;
};
void print_stu(struct Stu ss)  // �ṹ�����
{
	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
}
void set_stu(struct Stu* ps)  // �ṹ��ָ��
{
	strcpy((*ps).name, "zhangsan");
	(*ps).age = 20;
	(*ps).score = 100.0;

	// ps-> �ȼ��� (*ps).
	strcpy(ps->name, "zhangsi");
	ps->age = 30;
	ps->score = 110;
}

int fun()
{
	int count = 1;
	//return count++;
	return ++count;
}
int main()
{//�ṹ��

	struct Stu s = { 0 };
	set_stu(&s);
	print_stu(s);

	// ��������
	char a = 5;
	char b = 126;
	char c = a + b;
	printf("%d \n", c);
	printf("%c \n", c);
	printf("%c \n", c + 1);

	c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(-c));

	// ���� ��׺ ++ �ں���return�еĵ���
	int d = fun();
	printf("%d\n", d);

	//printf("������5���ɼ���");
	int arr1[5] = { 0 };
	int i = 0;
	int max = 0;
	int min = 100;
	/*for (i = 0; i < 5; i++)
	{
		scanf("%d", &(arr1[i]));
		if (i > 0)
		{
			
			if (arr1[i - 1] < arr1[i])
			{
				max = arr1[i];
				
			}
			
			if (arr1[i - 1] > arr1[i])
			{
				min = arr1[i-1];
			}
				
			
		}
		int fff = 0;
	}
	
	for (i = 0; i < 5; i++)
	{
		printf("%d \n", arr1[i]);
	}
	printf("max = %d\n", max);
	printf("min = %d\n", min);*/
	//printf("%d ",fff)
	/*char ch = 0;
	for (i = 0; i < 5; i++)
	{
		printf( "len = %d ", scanf(" %c", &ch));
		printf("ch = %c \n", ch);
	}*/
	int in = 0;
	for (i = 0; i < 5; i++)
	{
		printf("len = %d ", scanf("%d", &in));
		printf("in = %d \n", in);
	}
	return 0;
}