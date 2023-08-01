#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high;
};

// p1 和 p2 是使用Peo结构类型创建的2个变量
/*struct Peo
{
	char name[20];
	char tele[12];
	char sex[5];
	int high
}p1,p2;*/  // 这里 P1 和 p2 是两个全局的结构体变量

struct St
{
	struct Peo p;
	int num;
	float f;  // 浮点数在内存中不能精确保存
};


void print(struct Peo* sp)
{
	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);
	printf("%s %s %s %d\n", (*sp).name, (*sp).tele, (*sp).sex, (*sp).high);
}
void print1(struct Peo sp)
{
	printf("%s %s %s %d\n", sp.name, sp.tele, sp.sex, sp.high);
}

int main() {
	
	struct Peo p1 = {"zhangsan","18269865744","男", 181}; //结构体变量的创建 
	struct Peo p2 = {"zhangsan","18269865744"}; 
	
	struct St s = { {"lisi", "1559662428", "女",166},100,3.14f};  
	char arr1[] = "潘巧牛皮";
	int len = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < len; i++)
	{
		printf("%c", arr1[i]);
	}
	printf("\n");
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d\n", p2.name, p2.tele, p2.sex, p2.high);


	printf("%s %s %s %d, %d, %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high,s.num,s.f);

	printf("%d\n", (&p1)->high);
	print(&p1);
	print1(p1);

	struct Peo* pop = &p1;
	printf("%s %s %s %d\n", pop->name, pop->tele, pop->sex, pop->high);

	char arr2[3] = "盘";
	printf("%s", arr2);
	struct Peo p3 = { 0 };
	printf("%s %s %s %d\n", p3.name, p3.tele, p3.sex, p3.high);
	return 0;
}
