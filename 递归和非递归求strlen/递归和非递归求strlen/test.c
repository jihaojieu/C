#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 非递归
int Strlen(char* str) {
	int count = 0;
	while (*str) {
		++count;
		++str;
	}
	return count;
}

// 递归
int Strlen_r(char* str) {
	if (*str) {
		// 1 + 子串的长度
		return 1 + Strlen(1 + str);
	}
	// 空串
	else {
		return 0;
	}
}

int main() {
	char str[] = { 0 };
	scanf("%s", &str);
	printf("%d\n", Strlen(str));
	printf("%d\n", Strlen_r(str));
    system("pause");
    return 0;
}