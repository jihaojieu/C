#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	// 要求第 n 项，就必须知道 n-1 和 n-2 项
	// n_1：n-1 项  n_2：n-2 项  n_i：第 i 项
	int n_1 = 1;
	int n_2 = 1;
	// 初始化为 0
	int n_i = 0;
	for (int i = 3; i <= n; ++i) {
		n_i = n_1 + n_2;
		n_2 = n_1;
		n_1 = n_i;
	}
	return n_i;

}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d ", Fib(n));
	system("pause");
	return 0;
}