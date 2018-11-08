#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	// 定义一个字符数组用来存储密码
	char password[1024] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("请输入您的密码！\n");
		scanf_s("%s", password);
		if (strcmp(password, "jhj52000") == 0) {
			printf("登录成功！\n");
			break;
		}
	}
	if (i == 3) {
		printf("登录失败！\n");
	}
	system("pause");
	return 0;
}