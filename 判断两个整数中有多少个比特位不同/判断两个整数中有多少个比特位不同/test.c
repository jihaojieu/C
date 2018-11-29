#include <stdio.h>
#include <stdlib.h>
int main() {
	int a = 0;
	int b = 0;
	int count = 0;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i <= 32; ++i) {
		if (((a ^ b) >> i) & 1) {
			++count;
		}
	}
	printf("%d\n", count);
}