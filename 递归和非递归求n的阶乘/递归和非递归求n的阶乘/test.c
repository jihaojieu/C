#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ·ÇµÝ¹é
int Jiecheng(int n) {
	int sum = 1;
	for (int i = 1; i <= n; ++i) {
		sum *= i;
	}
	return sum;
}

// µÝ¹é
int Jiecheng_r(int n) {
	if (n <= 1) {
		return 1;
	}
	return n * Jiecheng_r(n - 1);
}

int main() {
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Jiecheng(n));
	printf("%d\n", Jiecheng_r(n));
    system("pause");
    return 0;
}