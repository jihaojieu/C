#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 先把每一项求出来I,再求和
// 第1项 2
// 第2项 22 = 20 + 2 = 2*10 + 2 = 2*10^1 + 2*10^0
// 第3项 222 = 200 + 20 + 2 = 2*100 + 2*10 +2 = 2*10^2 + 2*10^1 + 2*19^0
// 第4项 2222 = 2*10^3 + 2*10^2 +2*10^1 + 2*10^0

// 创建出第n项的内容
int CreatNum(int a, int n) {
	if (a > 9 || a <= 0 || n<= 0) {
		return 0;
	}
	int num = 0;
	// i：10的指数
	for (int i = 0; i < n; ++i) {
		// pow 返回值是 double,  double*int = double, double+int = int,丢失精度
		num += a*(int)pow(10, i);
	}
	return num;
}
int main() {
	printf("%d\n", CreatNum(2, 5));
	int a = 1;
	int sum = 0;
	for (int i = 1; i <= 5; ++i) {
		sum += CreatNum(a, i);
	}
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}