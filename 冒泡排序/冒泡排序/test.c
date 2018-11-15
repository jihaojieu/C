#include <stdio.h>
#include <stdlib.h>
// 升序：从小到大  降序：从大到小
// 找最大：从前往后冒  找最小：从后往前冒
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
void BubbleSort(int* arr, int size) {
	// [0,bound)已排序区间  [bound,size)未排序区间
	int bound = 0;
	for (; bound < size; ++bound) {
		// 找最小值
		int cur = size - 1;
		for (; cur > bound; --cur) {
			if (arr[cur - 1] > arr[cur]) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}
int main() {
	// 数组作为函数的参数时会隐式转换成指针，指向数组的首元素
	// 在函数外部将数组长度求好然后当做参数传到函数里面
	int arr[] = { 3, 8, 5, 9, 2, 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}