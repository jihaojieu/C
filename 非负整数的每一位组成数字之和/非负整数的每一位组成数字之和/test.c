#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n) {
	if (n <= 0) {
		return 0;
	}
	return n % 10 + DigitSum(n / 10);
}
int main() {
	int n = 0;
	scanf_s("%d\n", &n);
	printf("%d\n", DigitSum(n));
    system("pause");
	return 0;
}