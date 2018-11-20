#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, n;
	int sum = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		sum *= i;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}