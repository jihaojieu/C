#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// 定义地图
#define MAX_ROW 6
#define MAX_COL 6
// 设置默认的地雷数为 10
#define DEFAULT_MINE_COUNT 4

void Init(char show_map[MAX_ROW + 2][MAX_COL + 2], char mine_map[MAX_ROW + 2][MAX_COL + 2]) {
	for (int row = 0; row < MAX_ROW + 2; ++row) {
		for (int col = 0; col < MAX_COL + 2; ++col) {
			show_map[row][col] = '*';
		}
	}
	for (int row = 0; row < MAX_ROW + 2; ++row) {
		for (int col = 0; col < MAX_COL + 2; ++col) {
			mine_map[row][col] = ' ';
		}
	}
	// 随机产生 N 个雷(坐标),放到雷阵中
	int mine_count = DEFAULT_MINE_COUNT;
	while (mine_count > 0) {
		int row = rand() % MAX_ROW + 1;
		int col = rand() % MAX_COL + 1;
		// 当前位置已经有雷了
		if (mine_map[row][col] == '1') {
			continue;
		}
		mine_map[row][col] = '1';
		--mine_count;
	}
}
void DisplayMap(char show_map[MAX_ROW + 2][MAX_COL + 2]) {
	printf("    ");
	// 打印第一行纵坐标
	for (int col = 1; col <= MAX_COL; ++col) {
		printf("%d ", col);
	}
	printf("\n");
	// 打印上边框
	for (int col = 1; col <= MAX_COL; ++col) {
		printf("___");
	}
	printf("\n");
	// 按行打印具体的地图
	for (int row = 1; row <= MAX_COL; ++row) {
		printf("%02d |", row);
		for (int col = 1; col <= MAX_COL; ++col) {
			printf("%c ", show_map[row][col]);
		}
		printf("\n");
	}
}
// 这个函数根据 mine_map 来计算 row, col 位置上周围有几个雷,把结果写在 show_map 位置上
void UpdateShowMap(char show_map[MAX_ROW+2][MAX_COL+2], char mine_map[MAX_ROW + 2][MAX_COL + 2], int row, int col) {
	int mine_count = 0;
	for (int i = row - 1; i <= row + 1; i++) {
		for (int j = col - 1; j <= col + 1; j++) {
			if (mine_map[i][j] == '1') {
				mine_count++;
			}
			continue;
		}
	}
    show_map[row][col] ='0'+ mine_count;
}

//void UpdateShowMap(char show_map[MAX_ROW + 2][MAX_COL + 2], char mine_map[MAX_ROW + 2][MAX_COL + 2], int row, int col)
////根据minemap函数计算(row，col)点周围地雷的数量
////结果写到对应的showmap上
//{
//	int mine_count = 0;
//	//由于加了边框，所以以下的坐标不会越界
//	mine_count = mine_map[row - 1][col - 1] - '0'
//		+ mine_map[row - 1][col] - '0'
//		+ mine_map[row - 1][col + 1] - '0'
//		+ mine_map[row][col - 1] - '0'
//		+ mine_map[row][col + 1] - '0'
//		+ mine_map[row + 1][col - 1] - '0'
//		+ mine_map[row + 1][col] - '0'
//		+ mine_map[row + 1][col + 1] - '0';
//	show_map[row][col] = '0' + mine_count;//mine_count 是一个int型数值，不是字符，加上一个字符0
//}

void Game() {
	// 1. 使用两个二维数组分别表示 给玩家展示的地图 和 雷阵（带边框）
    // show_map:  *(还没掀开的位置)  '1''2'(已经掀开的位置)
	char show_map[MAX_ROW + 2][MAX_COL + 2];
	// mine_map:  '1'(是地雷)  '0'(不是地雷)
	char mine_map[MAX_ROW + 2][MAX_COL + 2];
	// 空白格子
	int blank_count = 0;
	// 2. 初始化两个地图
	Init(show_map, mine_map);
	// 3. 打印地图（完全没有被先掀开的）
	printf("\n");
	DisplayMap(show_map);
	while (1) {
		// 4. 游戏开始，让玩家输入坐标并判定坐标是否合法
		int row, col;
		printf("\n请输入坐标： ");
		scanf("%d %d", &row, &col);
		printf("\n");
		if (row < 1 || row > MAX_ROW || col < 1 || col > MAX_COL) {
			printf("\n您的输入不合法,请重新输入!\n");
			continue;
		}
		// 5. 判定游戏是否结束（玩家是否踩雷).如果踩雷,游戏结束;如果没踩雷,判定是否掀开所有格子
		if (mine_map[row][col] == '1') {
			printf("\n游戏结束!\n");
			printf("\n");
			DisplayMap(mine_map);
			break;
		}
		++blank_count;
		if (blank_count == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT) {
			printf("\n扫雷成功!\n");
			DisplayMap(mine_map);
			break;
		}
		// 6. 没踩雷的情况下，统计该位置周围有几个雷，并且把这个数字更新到地图上
		UpdateShowMap(show_map, mine_map, row, col);
		DisplayMap(show_map);
	}
}
// 程序的入口函数
void Start() {
	printf("  ==============\n");
	printf("   1. 开始游戏！\n");
	printf("   0. 退出游戏！\n");
	printf("  ==============\n");
	printf("\n请输入您的选择:  ");
	int choice = 0;
	scanf("%d", &choice);
	while (1) {
		if (choice == 1) {
			Game();
		}
		break;
	}
}
int main() {
	Start();
	system("pause");
    return 0;
}