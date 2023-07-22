#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArray(int* arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", *arr[i]);
	}
	printf("\n");
}

int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a, &b, &c };

	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, size);

	return 0;
}
