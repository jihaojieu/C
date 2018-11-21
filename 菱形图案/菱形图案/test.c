#include <stdio.h>
#include <stdlib.h>
void PrintLine(int blank_count, int star_count) {
	for (int i = 0; i < blank_count; ++i) {
		printf(" ");
	}
	for (int i = 0; i < star_count; ++i) {
		printf("*");
	}
	printf("\n");
}
void PrintLingxing(int height) {
	// 用对角线的一般衡量菱形的大小
	// 先打印上半部分
	for (int i = 1; i <= height; ++i) {
		PrintLine(height + 1 - i, 2 * i - 1);
	}
	// 再打印中间部分
	PrintLine(0, 2 * (height + 1) - 1);
	// 打印下半部分
	for (int i = height; i >= 1; --i) {
		PrintLine((height + 1) - i, 2 * i - 1);
	}
}
int main() {
	// 1行  6空格，1星号
	// 2行  5空格，3星号
	// 3行  4空格，5星号
	// i行  7-i 空格，2*i-1 星号
	int height = 0;
	scanf_s("%d", &height);
	PrintLingxing(height);
	system("pause");
	return 0;
}