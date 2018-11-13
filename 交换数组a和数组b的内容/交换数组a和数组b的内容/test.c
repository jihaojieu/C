#include <stdio.h>
#include <stdlib.h>
int main() {
	// 两个数组的长度相同
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 3, 4, 5 };
	for (int i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++) {
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("数组1：");
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("数组2：");
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}