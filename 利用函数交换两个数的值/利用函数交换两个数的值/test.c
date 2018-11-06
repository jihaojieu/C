#include <stdio.h>
#include <stdlib.h>
void Change(int* i, int* j) {
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
}
int main() {
	printf("请输入两个数字！\n");
	int i = 0;
	int j = 0;
	scanf_s("%d,%d", &i, &j);
	Change(&i, &j);
	printf("i = %d, j = %d\n", i, j);
	system("pause");
	return 0;
}