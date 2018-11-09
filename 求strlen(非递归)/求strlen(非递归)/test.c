// c string 是以 \0 结尾的字符数组
#include <stdio.h>
#include <stdlib.h>
int main() {
	int strlen = 0;
	char str[] = "abcd";
	while (str[strlen] != '\0') {
		++strlen;
	}
	printf("%d\n", strlen);
	system("pause");
	return 0;
}