#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Sum1(int i) {
	int sum1 = 0; int a = 1;
	for (a = 1; a <= i; a++) {
		sum1 += a;
	}
	return sum1;
}
int Sum2(int j) {
	int sum2 = 0; int b = 1;
	for (b = 1; b <= j; b++) {
		sum2 += b*b;
	}
	return sum2;
}
int main() {
	printf("请输入两个整数！\n");
	int i, j;
	int sum = 0;
	scanf("%d,%d", &i, &j);
	//int Sum1(i);
	///*Sum2(j);
	sum = Sum1(i) + Sum2(j);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}