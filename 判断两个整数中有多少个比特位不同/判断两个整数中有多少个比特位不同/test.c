#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Factor(int a, int b) {
	int count = 0;
	for (int i = 1; i <= 32; ++i) {
		if ((((a ^ b) >> i) & 1) == 1) {
			++count;
		}
	}
	return count;
}
int main() {
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("%d\n", Factor(a, b));
    system("pause");
    return 0;
}