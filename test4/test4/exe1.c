#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//// define �����ʶ����
//#define NUM 100
//
//// define �����
//#define ADD(x, y) ((x)+(y))
//
//int main() {
//	printf("%d\n", NUM);
//	int n = NUM;
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//
//
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
	char sex[10];
	char tale[12];
};

void print(struct Stu *ps) {
	printf("%s%d%s%s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tale);
	// ->
	//�ṹ��ָ�����->��Ա��
	printf("%s%d%s%s\n",  ps->name, ps->age, ps->sex, ps->tale);
}
int main() {
	int a = 10;
	//&a;
	printf("%p\n", &a);
	// p ��ָ�����
	int* p = &a;
	char ch = 'w';
	char* pc = &ch;
	*p = 20;
	printf("%d\n", a);
	printf("%d\n", *p);
	printf("%zd\n", sizeof(*p));

	struct Stu s =
	{
		"zhangsan", 20, "man", "18256548521"
	};
	printf("%s%d%s%s\n", s.name,s.age,s.sex,s.tale);
	print(&s);
	return 0;
}