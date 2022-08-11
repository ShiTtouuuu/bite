//# define _CRT_SECURE_NO_WARNINGS 1
////			三字棋函数存放
//#include "game.h"
//
//void InitBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			board[i][j] = ' ';
//		}
//	}
//}
//
////void DisplayBoard(char board[ROW][COL], int row, int col) {
////	int i = 0;
////	for (i = 0; i < row; i++) {
////		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
////		if (i < row - 1) {
////			printf("---|---|---\n");
////		}
////	}
////}
//
//void DisplayBoard(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		int j = 0;
//		for (j = 0; j < col; j++) {
//			printf(" %c ", board[i][j]);
//			if (j < col - 1) {
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < row - 1) {
//			//printf("---|---|---");
//			int j = 0;
//			for (j = 0; j < col; j++) {
//				printf("---");
//				if (j < col - 1) {
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//
//void PlayerMove(char board[][COL], int row, int col) {
//
//	int x = 0;
//	int y = 0;
//
//	printf("玩家走:>\n");
//
//	printf("输入下棋的座標:>");
//	scanf("%d %d", &x, &y);
//
//	//判断坐标合法性
//	while (1) {
//		if (x >= 1 && x <= row && y >= 1 && y <= col) {
//			//判断坐标是否被占用
//			if (board[x - 1][y - 1] == ' ') {
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else {
//				printf("err\n");
//			}
//		}
//		else {
//			printf("err\n");
//		}
//	}
//}
//
//void ComputerMove(char board[ROW][COL], int row, int col) {
//	printf("conputer:>\n");
//
//	while (1) {
//		int x = rand() % row;
//		int y = rand() % col;
//
//		if (board[x][y] == ' ') {
//			board[x][y] = '#';
//			break;
//		}
//	}
//}
//
//int IsFull(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++) {
//		for (j = 0; j < col; j++) {
//			if (board[i][j] == ' ');
//			return 0;//not full
//		}
//	}
//	return 1;
//}
//
//
//char IsWin(char board[ROW][COL], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++) {
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ') {
//			return board[i][1];
//		}
//	}
//	for (i = 0; i < row; i++) {
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ') {
//			return board[1][i];
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
//		return board[1][1];
//	}
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ') {
//		return board[1][1];
//	}
//	//平局判断
//	int ret = IsFull(board, row, col);
//	if (ret == 1) {
//		return 0;
//	}
//	//continue
//	return 1;
//}