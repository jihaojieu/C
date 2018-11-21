#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	// °ÙÊ®¸ö
	int i; int j; int k;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < 10; k++) {
				if (k + 10 * j + 100 * i == pow(i, 3) + pow(j, 3) + pow(k, 3)) {
					if (k + 10 * j + 100 * i >= 100) {
						printf("%d\n", k + 10 * j + 100 * i);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}