#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100
#define STR "abcdef"
//enum Color
//{
//	// ö�ٳ���
//	Boy,
//	Girl,
//};
//
//int main() {
//	// 1�����泣��
//	30;
//	3.14;
//	'w'; // �ַ�����
//	"abc"; // �ַ�������
//
//	// 2��const ���εĳ�����  ��C������, const ���ε� a, �����Ǳ��������ǲ����޸ģ��г���������
//	const int a = 10;
//	printf("%d\n", a);
//   /* a = 20;
//	printf("%d", a);*/ // ����
//
//	// 3��define ����ı�ʶ������
//	printf("%d\n", MAX);
//	int b = MAX;
//	printf("%d\n", b);
//	printf("%s\n", STR);
//	// MAX = 100; ����
//
//	// 4��ö�ٳ���
//	enum Color p = Boy;
//	printf("--%d\n", Boy);
//	printf("--%d\n", Girl);
//#define Min 10 
//	printf("--%d\n", Min);
//
//	return 0;
//}

//#include <stdio.h>
////����
//enum Sex
//{
//    MALE,
//    FEMALE,
//    SECRET
//};
////�����е�MALE,FEMALE,SECRET��ö�ٳ���
//int main()
//{
//    //���泣����ʾ
//    3.14;//���泣��
//    1000;//���泣��
//
//    //const ���εĳ�����
//    const float pai = 3.14f;   //�����pai��const���εĳ�����
//    //pai = 5.14;//�ǲ���ֱ���޸ĵģ�
//
//    //#define�ı�ʶ������ ��ʾ
//#define MAX 100
//    printf("max = %d\n", MAX);
//
//    //ö�ٳ�����ʾ
//    printf("%d\n", MALE);
//    printf("%d\n", FEMALE);
//    printf("%d\n", SECRET);
//    //ע��ö�ٳ�����Ĭ���Ǵ�0��ʼ���������µ���1��
//    return 0;
//}

//int main() {
//	// char �ַ�����
//	char ch = 'w';
//	printf("%d\n", 15);
//	// �ַ���  c������û���ַ�������
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


// %d ��ӡ����
// %c ��ӡ�ַ�
// %s ��ӡ�ַ���
// %f ��ӡ float ������
// %lf ��ӡ double ���͵�����
// %zu ��ӡsizeof �ķ���ֵ
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
//		printf("��offer\n");
//	}
//	else {
//		printf("������\n");
//	}
//	return 0;
//}

//int main() {
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000){
//		printf("д����%d\n", line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
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
//	//int b = 3.15; // ���渡������Ĭ��Ϊdouble����
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
	// ���ű��ʽ�Ƕ��Ÿ�����һ�����ʽ
	// ���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
	int a = 10;
	int b = 20;
	int c = 0;
	int d = (c = a - 2, a = b + c, c - 3);
	
	printf("%d\n", d);
	printf("%d\n", a);
	return 0;
}