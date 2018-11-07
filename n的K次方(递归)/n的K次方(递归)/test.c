#include <stdio.h>
#include <stdlib.h>
int Factor(int n, int k) {
	if (k == 1) {
		return n;
	}
	else {
		return n*Factor(n, (k - 1));
	}
}
int main() {
	printf("请输入两个整数！\n");
	int n = 0; int k = 0;
	scanf_s("%d,%d", &n, &k);
	printf("%d\n", Factor(n, k));
	system("pause");
	return 0;
}