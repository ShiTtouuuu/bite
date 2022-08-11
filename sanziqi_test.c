//# define _CRT_SECURE_NO_WARNINGS 1
////				三字棋主函数
//#include "game.h"
//
//void menu() {
//	printf("*****************************\n");
//	printf("*****      1. Play      *****\n");
//	printf("*****      2. Exit      *****\n");
//	printf("*****************************\n");
//}
//
//void game() {
//	//存储数据 - 二维数组
//	char board[ROW][COL];
//	//初始化棋盘
//	InitBoard(board, ROW, COL);
//	//打印一下棋盘 - 本质是打印数组的内容
//	DisplayBoard(board, ROW, COL);
//
//	char ret = 0;
//	while (1) {
//		//Player
//		PlayerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//
//		ret = IsWin(board, ROW, COL);
//		if (ret != '1')
//			break;
//
//		//Computer
//		ComputerMove(board, ROW, COL);
//		DisplayBoard(board, ROW, COL);
//		ret = IsWin(board, ROW, COL);
//		if (ret != '1')
//			break;
//
//	}
//	if (ret == '*') {
//		printf("Player Win\n");
//	}
//	else if (ret == '#') {
//		printf("Computer Win\n");
//	}
//	else if (ret = 0) {
//		printf("pin ju\n");
//	}
//	DisplayBoard(board, ROW, COL);
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("chois:>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("\nExit System\n\n");
//			break;
//		default:
//			printf("\nerr\n\n");
//			break;
//		}
//	} while (input);
//
//
//
//	return 0;
//}