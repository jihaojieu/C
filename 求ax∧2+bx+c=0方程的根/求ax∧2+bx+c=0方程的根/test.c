// ¼ÙÉè b^2 - 4ac > 0
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	double a, b, c, disc, x1, x2, p, q;
	scanf("%1f, %1f, %1f", &a, &b, &c);
	 disc = b*b - 4 * a*c;
	 p = -b / (2.0*a);
  	 q = sqrt(disc) / (2.0*a);
	x1 = p + q;
	x2 = p - q;
	printf("x1 = %.2f, x2 = %.2f\n", x1, x2);
	system("pause");
	return 0;
}