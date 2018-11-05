#include <stdio.h>
#include <stdlib.h>
int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int to_find = 13;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (to_find < arr[mid]) {
			right = mid - 1;
		}
		else if (to_find > arr[mid]) {
			left = mid + 1;
		}
		else {
			break;
		}
	}
	if (left <= right) {
		printf("找到了！%d\n", mid);
	}
	else {
		printf("没找到！%d\n", -1);
	}
	system("pause");
	return 0;
}