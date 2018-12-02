// 获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
// 比如：1011 0011  偶数序列：1101，奇数序列：0101
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Print_bits(int n) {
	// 打印偶数序列(i:移几位)
	printf("偶数序列是： ");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	// 打印奇数序列
	printf("奇数序列是： ");
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}

int main() {
	int n = 0;
	scanf("%d", &n);
	Print_bits(n);
    system("pause");
    return 0;
}