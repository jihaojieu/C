#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a, b, c, s, area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c) / 2;
	// sqrt ¿ª·½
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("a = %f\tb = %f\tc = %f\n", a, b, c);
	printf("area = %f\n", area);
	system("pause");
	return 0;
}