//判斷棋盤是否有剩餘空間
int isFull(char chessBoard[3][3])
{
	//找空格？如果找不到就是滿了返回1：找到了則說明未滿返回0
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (chessBoard[row][col] == ' ')
			{
				//找到了
				return 0;
			}
		}
	}

	//未找到
	return 1;
}

//判斷是否勝利
char isWin(char chessBoard[3][3])
{
	// 'x' 表示玩家/玩家1獲勝
	// 'o' 表示電腦/玩家2獲勝
	// ' ' 表示勝負未分
	// 'q' 表示和棋

	//判定是否行相等
	for (int row = 0; row < 3; row++)
	{
		if (chessBoard[row][0] != ' '//行不都等於“ ”
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
		{
			return chessBoard[row][0];
		}
	}

	//判定是否列相等
	for (int col = 0; col < 3; col++)
	{
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col])
		{
			return chessBoard[0][col];
		}
	}

	//判定兩個對角線是否相等
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2])
	{
		return chessBoard[0][0];//主對角線相等
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2])
	{
		return chessBoard[2][0];//副對角線相等
	}

	//判定是否和棋看棋盤中是否有剩餘空間？有剩餘繼續；無剩餘則為和棋
	if (isFull(chessBoard))
	{
		return 'q';
	}

	//若遊戲未結束則繼續遊戲
	return ' ';
}


//遊戲函式
void game1()
{
	//1.建立一個3x3的棋盤
	int chessBoard[3][3] = { 0 };

	//2.初始化棋盤
	init(chessBoard);
	char winner = ' ';
	while (1)
	{
		//3.將棋盤進行列印
		printChessBoard(chessBoard);

		//4.玩家落子
		playerMove(chessBoard);

		//5.判斷是否勝利
		winner = isWin(chessBoard);

		//如果未結束則繼續遊戲
		if (winner != ' ')
		{
			break;
		}

		//7.電腦落子
		computerMove(chessBoard);

		//8.判斷是否勝利
		winner = isWin(chessBoard);

		//如果未結束則繼續遊戲
		if (winner != ' ')
		{
			break;
		}
		//迴圈操作3直至遊戲結束
	}
	printChessBoard(chessBoard);

	//勝利條件判斷
	if (winner == 'x')
	{
		printf("恭喜您, 您贏了電腦!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
	else if (winner == 'o')
	{
		printf("很遺憾, 您連電腦都打不過!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
	else
	{
		printf("很遺憾, 您跟電腦平手!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
}

void game2()
{
	//1.建立一個3x3的棋盤
	int chessBoard[3][3] = { 0 };

	//2.初始化棋盤
	init(chessBoard);
	char winner = ' ';

	while (1)
	{
		//3.將棋盤進行列印
		printChessBoard(chessBoard);

		//4.玩家1落子
		player1Move(chessBoard);

		printChessBoard(chessBoard);

		//5.判斷是否勝利
		winner = isWin(chessBoard);

		//如果未結束則繼續遊戲
		if (winner != ' ')
		{
			break;
		}

		//7.玩家2落子
		player2Move(chessBoard);

		//8.判斷是否勝利
		winner = isWin(chessBoard);

		//如果未結束則繼續遊戲
		if (winner != ' ')
		{
			break;
		}
		//迴圈操作3直至遊戲結束
	}
	printChessBoard(chessBoard);

	//勝利條件判斷
	if (winner == 'x')
	{
		printf("恭喜玩家1, 您贏了!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
	else if (winner == 'o')
	{
		printf("恭喜玩家2, 您贏了!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
	else
	{
		printf("很遺憾, 您們平手!\n\n");
		system("pause");//畫面停止
		system("cls");//清除頁面
	}
}