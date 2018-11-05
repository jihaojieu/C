#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Game() {
	// 产生一个随机数
    //32367
	srand((unsigned int)time(0));
	int result = rand() % 100 + 1;
	while (1) {
	printf("请输入你要猜的数字！\n");
	int num;
	scanf("%d", &num);
	    if (num > result) {
			printf("高了！\n");
		}
		else if (num < result) {
			printf("低了！\n");
		}
		else if (num == result) {
			printf("恭喜您猜中了！\n");
			break;
		}
	}
}

int main() {
	printf("请输入1或者0！ 1： 开始游戏  2： 结束游戏 \n");
	int i = 0;
	scanf("%d", &i);
	if (i == 1) {
		Game();
	}
	else {
		printf("goodbye!");
	}
}
