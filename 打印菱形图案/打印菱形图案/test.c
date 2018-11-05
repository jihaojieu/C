#include <stdio.h>
#include <stdlib.h>
int main() {
	// i 行数； j 空格数； k 星星数
	for (int i = 0; i <= 6; i++) {
		for (int j = 1; j <= 6 - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 2 * i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i <= 5; i++) {
		for (int j = 1; j <= i + 1; j++) {
			printf(" ");
		}
		for (int k = 1; k <= 11 - 2 * i; k++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}