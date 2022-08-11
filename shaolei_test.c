//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include "game.h"
////扫雷主函数
// 
//void menu() {
//	printf("\n****************************\n");
//	printf("****************************\n");
//	printf("******    1. Play    *******\n");
//	printf("******    0. Exit    *******\n");
//	printf("****************************\n");
//	printf("****************************\n");
//
//}
//
//void game() {
//	char mine[ROWS][COLS] = { 0 };//fake 
//	char show[ROWS][COLS] = { 0 };//real 
//	//初始化棋盘
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//
//	//打印一下棋盘
//	DisPlayBoard(show, ROW, COL);
//
//	//布置雷
//	SetMine(mine, ROW, COL);
//	//DisPlayBoard(mine, ROW, COL);
//
//	//排查雷
//	FindMine(mine, show, ROW, COL);
//}
//
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("\nchoice :> ");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			printf("\nゲームスタート！\n");
//			game();
//			break;
//		case 0:
//			printf("\nバイバイ！\n");
//			break;
//		default:
//			printf("\nエラーになりました！もう一度お願い！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}