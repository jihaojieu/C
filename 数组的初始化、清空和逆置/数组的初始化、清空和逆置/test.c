#include <stdio.h>
#include <stdlib.h>

void Init(int arr[], int size) {
	// memset 一个字节一个字节的填充
	memset(arr, 0, size*sizeof(arr[0]));
}

void Empty(int arr[], int size) {
	Init(arr, size);
}
// 在这里，初始化和清空是一样的操作

void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Reverse(int arr[], int size) {
	if (size <= 1) {
		return 0;
	}
	int left = 0;
	int right = size - 1;
	while (left < right) {
		Swap(&arr[left], &arr[right]);
		++left;
		--right;
	}

}
// 5个元素
#define SIZE 5
// 在函数内部无法求得数组元素的个数
// 数组作为函数参数的时候会隐式转换为指针，指向数组的首元素
int main() {
	int arr[SIZE] = { 1, 2, 3, 4, 5 };
	// 初始化
	Init(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	// 清空
	Empty(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	// 转置
	Reverse(arr, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}