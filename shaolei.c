//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include "game.h"
////		扫雷函数存放
//
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++) {
//		for (j = 0; j < cols; j++) {
//			board[i][j] = set;
//		}
//	}
//}
//
//void DisPlayBoard(char board[ROWS][COLS], int row, int col) {
//	int i = 0;
//	int j = 0;
//	printf("\n----------------------掃雷ゲーム---------------------------\n\n");
//	for (i = 0; i <= col; i++) {
//		printf("%d   ", i);
//	}
//	printf("\n");
//	printf("-------------------------------------\n");
//
//	for (i = 1; i <= row; i++) {
//		printf("%d | ", i);//hang
//		for (j = 1; j <= col; j++) {
//			printf("%c   ", board[i][j]);
//		}
//		printf("\n\n");
//	}
//
//	printf("\n----------------------掃雷ゲーム---------------------------\n");
//
//}
//
//void SetMine(char mine[ROW][COL], int row, int col) {
//	//set 10 个雷
//	int count = 10;
//	while (count) {
//		//生成随机的下标
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//		if (mine[x][y] == '0') {
//			mine[x][y] = '1';
//			count--;
//		}
//	}
//}
////static - 只在当前源文件使用
//static int get_mine_count(char mine[ROWS][COLS], int x, int y) {//支持实现FindMine
//	return mine[x - 1][y] +
//		mine[x - 1][y - 1] +
//		mine[x][y - 1] +
//		mine[x + 1][y - 1] +
//		mine[x + 1][y] +
//		mine[x + 1][y + 1] +
//		mine[x][y + 1] +
//		mine[x - 1][y + 1] - 8 * '0';
//}
//
//
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
//	//1.输入排查的坐标
//	//2.检查坐标是不是雷
//		//（1） 是雷 = 很遗憾炸死了 - 游戏结束
//		//（2） 不是雷 = 统计坐标周围有几个雷 - 存储排查雷的信息到show数组， 游戏继续
//
//	int x = 0;
//	int y = 0;
//
//
//	//判断坐标的合法性
//	while (1) {
//		printf("\nxとy座標を入れてくれ！ :>");
//		scanf("%d %d", &x, &y);//x--(1,9) y--(1,9)
//
//		if (x >= 1 && x <= row && y >= 1 && y <= col) {
//			if (mine[x][y] == '1') {
//				printf("\n     残念ながら、君は死ちゃった　:(　\n     地雷の配置図は↓\n");
//				DisPlayBoard(mine, row, col);
//				break;
//			}
//			else {
//				//不是雷的情况下，统计x，y坐标周围有几个雷
//				int count = get_mine_count(mine, x, y);
//				show[x][y] = count + '0';
//				DisPlayBoard(show, row, col);
//			}
//		}
//		else {
//			printf("座標間違えたよ，バガ\n");
//		}
//	}
//}
