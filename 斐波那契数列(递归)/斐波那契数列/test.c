#include <stdio.h>
#include <stdlib.h>
int Fib(int n) {
	if (n < 0) {
		return 0;
	}
	else if(n == 1 || n == 2) {
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main() {
	int i = 0; int j;
	scanf_s("%d", &i);
	for (j = 1; j <= i; j++) {
		printf("%d\t", Fib(j));
	}
	system("pause");
	return 0;
}