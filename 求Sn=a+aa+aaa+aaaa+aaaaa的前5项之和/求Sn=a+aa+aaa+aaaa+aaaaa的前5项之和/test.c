#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	printf("请用户输入一个整数！\n");
	int i = 0;
	scanf_s("%d", &i);
	int sum = 0;
	for (int j = 1; j <= 5; j++) {
		sum += (int)pow(i, j);
	}
	printf("前五项之和为：%d\n", sum);
	system("pause");
	return 0;
}