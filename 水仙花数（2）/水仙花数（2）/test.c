#include <stdio.h>
#include <stdlib.h>
int IsShuixian(int num) {
	// 防止num被修改，后续要跟num进行比较
	int temp = num;
	// 个位 
	int x1 = num % 10;
	// 十位
	num /= 10;
	int x2 = num % 10;
	// 百位
	num /= 10;
	int x3 = num % 10;
	if (x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == temp) {
		return 1;
	}
	return 0;
}
int main() {
	for (int i = 100; i <= 999; ++i) {
		// 判断IsShuixian是否成立
		if (IsShuixian(i)) {
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}