#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int num = 0;
	scanf("%d", &num);
	// 整数 4 个字节， 32 位
	for (int i = 1; i <= 32; i++) {
		if(i % 2 == 1) {
			if (!(num | (0 << i))) {
				printf("%d\t", 0);
			}
			if (num & (1 << i)) {
				printf("%d\t", 1);
			}
		}
		if (i % 2 == 0) {
			if (!(num | (0 << i))) {
				printf("%d\t", 0);
			}
			if (num & (1 << i)) {
				printf("%d\t", 1);
			}
		}
	}
    system("pause");
    return 0;
}