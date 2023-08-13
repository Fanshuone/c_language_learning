#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <corecrt_math.h>
//int main() {
//	long num = 0;
//	scanf("%d", &num);
//	int arr[100] = { 0 };
//	int i = 99;
//	while (num != 0) {
//		long rem = num % 10;
//		if (rem % 2 == 0) {
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 2;
//		}
//		num = num / 10;
//		i--;
//	}
//	num = 0;
//	for (int j = 0; j < 100; j++)
//	{
//		if (arr[j] != 0) {
//			printf("%d ", arr[j]);
//			num += (arr[j]-1) * (int)pow(10, (99 - j));
//		}
//		
//	}
//	//num = num / 10;
//	printf("%d", num);
//}

#include <stdio.h>

int main() {
	int a = 5;
	int i = 0;
	scanf("%d", &a);
	while (i < a) {

		for (int j = a-i; j > 0; j--)
		{
			/*for (int k = a; k > 0; k--)
			{
				printf("  ");

			}*/
			printf(" ");
			
		}
		for (int k=i; k >= 0; k--) {
			//printf(" ");
			printf("* ");
		}
		

		printf("\n");
		i++;

	}
	return 0;
}