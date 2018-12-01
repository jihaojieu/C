#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 非递归法
void Reverse_string(char* str) {
	// 字符串不为空
	if (*str) {
		// 起点的指针
		char* start = str;
		// 尾点的指针
		char* end = str + strlen(str) - 1;
		// 交换起点和尾点的内容
		while (start < end) {
			char temp = *start;
			*start = *end;
			*end = temp;
			++start;
			--end;
		}
	}	
} 

// 递归法，要求不能使用字符串库函数
int Strlen(char* str) {
	int count = 0;
	while (*str) {
		++count;
		++str;
	}
	return count;
}
void Reverse_string_r(char* str) {
	if (*str) {
		char* start = str;
		char* end = str + Strlen(str) - 1;
		// 首尾内容交换
		char temp = *start;
		*start = *end;
		// 尾点内容暂时存为奇数标记符
		*end = '\0';
		// 逆转子串
		Reverse_string_r(str + 1);
		// 把尾点内容恢复
		*end = temp;
	}
}
	
int main() {
	char str[100] = { 0 };
	scanf("%s", &str);
	Reverse_string(str);
	printf("%s\n", str);
	Reverse_string_r(str);
	printf("%s\n", str);
    system("pause");
    return 0;
}