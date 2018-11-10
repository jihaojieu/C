#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d", &n);
	// i: 次数  j: 第一个数  k: 第二个数  m: 第三个数
	int j = 1; int k = 1; int m;
	for (int i = 1; i <= n; i++) {
		if (i == 1 || i == 2) {
			m = 1;
		}
		else {
			m = j + k;
			j = k;
			k = m;
		}
		printf("%d\t", m);
	}
	system("pause");
	return 0;
}