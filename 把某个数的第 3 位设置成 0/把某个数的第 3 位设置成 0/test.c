#include <stdio.h>
#include <stdlib.h>
int main() {
	unsigned int a = 8;
	printf("%x\n", a & (~(1 << 3)));
    system("pause");
    return 0;
}