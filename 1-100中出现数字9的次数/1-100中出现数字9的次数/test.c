#include <stdlib.h>
int NineCount(int x) {
	int count = 0;
	// 两位数
	// 判断个位
	if (x % 10 == 9) {
		++count;
	}
	// 判断十位
	if (x / 10 == 9) {
		++count;
	}
	return count;
}
int main() {
	int count = 0;
	for (int i = 1; i < 100; i++) {
		count += NineCount(i);
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}