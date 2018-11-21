#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	// 保证a和b之间，a是比较大的数字
	if (a < b) {
		int temp = a;
		a = b;
		b = temp;
	}
	// 保证a和c之间，a是比较大的数字
	// 那么此时a就是三者里面最大的数字
	if (a < c) {
		int temp = a;
		a = c;
		c = temp;
	}
	printf("%d\n", a);
	if (b > c) {
		printf("%d\n", b);
		printf("%d\n", c);
	}
	else {
		printf("%d\n", c);
		printf("%d\n", b);
	}
	system("pause");
	return 0;
}