#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 轮到玩家落子，提示玩家输入一个坐标
// 轮到电脑落子，随机找空白的坐标落子

// 1.定义棋盘（二维数组即可）
#define ROW 3
#define COL 3
char g_board[ROW][COL];

// 2.初始化棋盘成空格（初始化二维数组）
void Init() {
	// 程序一开始的时候设置随机种子
	srand((unsigned int)time(0));
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			g_board[row][col] = ' ';
		}
	}
}

// 3.打印出棋盘
void Print() {
	printf("\n");
	printf(" ___________\n");
	for (int row = 0; row < ROW; ++row) {
		printf("| %c | %c | %c |\n", g_board[row][0], g_board[row][1], g_board[row][2]);
		printf("|___|___|___|\n");
	}
}

// 4.玩家落子(用 “x” 表示)
void PlayerMove() {
	while (1) {
		int row, col;
		printf("\n请玩家落子：");
		scanf_s("%d %d", &row, &col);
		if (row < 0 || row >= ROW || col < 0 || col >= COL) {
			printf("输入的坐标有误，请玩家重新输入坐标！\n");
			continue;
		}
		if (g_board[row][col] != ' ') {
			printf("当前位置已经有子了，请玩家重新输入坐标！\n");
			continue;
		}
		g_board[row][col] = 'x';
		break;
	}
}

// 5.电脑落子(用 “o” 表示)
void ComputerMove() {
	printf("\n电脑正在落子中！\n");
	while (1) {
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_board[row][col] != ' ') {
			continue;
		}
		g_board[row][col] = 'o';
		printf("\n电脑落子的坐标为：%d %d", row, col);
		break;
	}
}

// 判定游戏是否结束
char CheckWinner() {
	// winner=x, 玩家胜
	// winner=0, 电脑胜
	// winner=' ', 胜负未分
	// winner=q, 和棋

	// 先检查行
	for (int row = 0; row < ROW; ++row) {
		if (g_board[row][0] == g_board[row][1]
			&& g_board[row][0] == g_board[row][2]
			&& g_board[row][0] != ' ') {
			return g_board[row][0];
		}
	}
	// 再检查列
	for (int col = 0; col < COL; ++col) {
		if (g_board[0][col] == g_board[1][col]
			&& g_board[0][col] == g_board[2][col]
			&& g_board[0][col] != ' ') {
			return g_board[0][col];
		}
	}
	// 检查两条对角线
	if (g_board[0][0] == g_board[1][1]
		&& g_board[0][0] == g_board[2][2]
		&& g_board[0][0] != ' ') {
		return g_board[0][0];
	}
	if (g_board[2][0] == g_board[1][1]
		&& g_board[2][0] == g_board[0][2]
		&& g_board[2][0] != ' ') {
		return g_board[2][0];
	}
	// 检查 “和棋” 的情况
	for (int row = 0; row < ROW; ++row) {
		for (int col = 0; col < COL; ++col) {
			if (g_board[row][col] == ' ') {
				return ' ';
			}
		}
	}
}

int main() {
	Init();
	char winner;
	while (1) {
		Print();
		PlayerMove();
		Print();
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
		ComputerMove();
		winner = CheckWinner();
		if (winner != ' ') {
			break;
		}
	}
	if (winner == 'x') {
		printf("恭喜您胜出了！\n");
	}
	else if (winner == 'o') {
		Print();
		printf("电脑胜出！\n");
	}
	else
	{
		printf("和棋！\n");
	}
	system("pause");
	return 0;
}