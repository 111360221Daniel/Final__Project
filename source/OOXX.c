#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>

//OOXX遊戲

//一·建立一個遊戲選單
//選單函式
int menu()
{
	printf("\n========================\n");
	printf("輸入0:結束遊戲\n");
	printf("輸入1:單人模式\n");
	printf("輸入2:雙人模式\n");
	printf("========================\n");
	printf("請輸入您的選擇: ");
	int num = -1;
	scanf("%d", &num);//利用鍵盤輸入選項
	return num;//將選項值返回到主函式中進行判斷
}

//二·遊戲內容
//棋盤初始化
void init(char chessBoard[3][3])
{
	//把陣列中的每個元素都設為“空格”
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			chessBoard[row][col] = ' ';
		}
	}
}

//列印棋盤
void printChessBoard(char chessBoard[3][3])
{
	printf("+---+---+---+\n");

	for (int row = 0; row < 3; row++)
	{
		printf("| %c | %c | %c |\n", chessBoard[row][0], chessBoard[row][1], chessBoard[row][2]);
		printf("+---+---+---+\n");
	}
	printf("\n");
}

//玩家落子“x”
void playerMove(char chessBoard[3][3])
{
	while (1)
	{
		printf("請輸入你要下棋的座標（列，行）:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//對落子進行判斷
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//輸出越界讓玩家重新輸入
			printf("您的座標不在正確範圍內!\n\n");
			continue;
		}

		//校驗玩家落子位置是否已經有子了
		if (chessBoard[row][col] != ' ')
		{
			printf("您的座標位置已經有子了!\n\n");
			continue;
		}

		//最終落子
		chessBoard[row][col] = 'x';
		break;
	}
}

//電腦落子“o”
void computerMove(char chessBoard[3][3])
{
	while (1)
	{
		int row = rand() % 3;//設定隨機數讓棋子落在棋盤內
		int col = rand() % 3;

		//對落子進行判斷
		//校驗玩家落子位置是否已經有子了
		if (chessBoard[row][col] != ' ')
		{
			continue;
		}

		//最終落子
		chessBoard[row][col] = 'o';
		break;
	}
}

void player1Move(char chessBoard[3][3])
{
	while (1)
	{
		printf("請輸入玩家1要下棋的座標（列，行）:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//對落子進行判斷
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//輸出越界讓玩家重新輸入
			printf("您的座標不在正確範圍內!\n\n");
			continue;
		}

		//校驗玩家落子位置是否已經有子了
		if (chessBoard[row][col] != ' ')
		{
			printf("您的座標位置已經有子了!\n\n");
			continue;
		}

		//最終落子
		chessBoard[row][col] = 'x';
		break;
	}
}

void player2Move(char chessBoard[3][3])
{
	while (1)
	{
		printf("請輸入玩家2要下棋的座標（列，行）:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//對落子進行判斷
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//輸入越界讓玩家重新輸入
			printf("您的座標不在正確範圍內!\n\n");
			continue;
		}

		//校驗玩家落子位置是否已經有子了
		if (chessBoard[row][col] != ' ')
		{
			printf("您的座標位置已經有子了!\n\n");
			continue;
		}

		//最終落子
		chessBoard[row][col] = 'o';
		break;
	}
}
