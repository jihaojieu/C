#include <stdio.h>
#include <stdlib.h>
int main() {
	// 32位的无符号整数
	// 第 3 位设置成 1 相当于：1 << 3
	unsigned int a = 0;
	printf("%x\n", a | (1 << 3));
    system("pause");
    return 0;
}