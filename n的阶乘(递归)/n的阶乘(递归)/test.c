#include <stdio.h>
#include <stdlib.h>
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n*Factor(n - 1);
}
int main() {
	int i = 0;
	scanf_s("%d", &i);
	printf("%d\n", Factor(i));
	system("pause");
	return 0;
}