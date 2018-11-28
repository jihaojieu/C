#include <stdio.h>
#include <stdlib.h>
void Fib(int num) {
	int n_1 = 1; int n_2 = 1; int n_i;
	for (int i = 1; i <= num; ++i) {
		if (i == 1 || i == 2) {
			n_i = 1;
		}
		else {
			n_i = n_1 + n_2;
			n_1 = n_2;
			n_2 = n_i;
		}
		printf("%d\t", n_i);
		if (i % 6 == 0) {
			printf("\n");
		}
	}
}
int main() {
	int num = 0;
	scanf_s("%d", &num);
	Fib(num);
	system("pause");
	return 0;
}