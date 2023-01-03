//�P�_�ѽL�O�_���Ѿl�Ŷ�
int isFull(char chessBoard[3][3])
{
	//��Ů�H�p�G�䤣��N�O���F��^1�G���F�h����������^0
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (chessBoard[row][col] == ' ')
			{
				//���F
				return 0;
			}
		}
	}

	//�����
	return 1;
}

//�P�_�O�_�ӧQ
char isWin(char chessBoard[3][3])
{
	// 'x' ��ܪ��a/���a1���
	// 'o' ��ܹq��/���a2���
	// ' ' ��ܳӭt����
	// 'q' ��ܩM��

	//�P�w�O�_��۵�
	for (int row = 0; row < 3; row++)
	{
		if (chessBoard[row][0] != ' '//�椣������ ��
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
		{
			return chessBoard[row][0];
		}
	}

	//�P�w�O�_�C�۵�
	for (int col = 0; col < 3; col++)
	{
		if (chessBoard[0][col] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col])
		{
			return chessBoard[0][col];
		}
	}

	//�P�w��ӹ﨤�u�O�_�۵�
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2])
	{
		return chessBoard[0][0];//�D�﨤�u�۵�
	}
	if (chessBoard[2][0] != ' '
		&& chessBoard[2][0] == chessBoard[1][1]
		&& chessBoard[2][0] == chessBoard[0][2])
	{
		return chessBoard[2][0];//�ƹ﨤�u�۵�
	}

	//�P�w�O�_�M�ѬݴѽL���O�_���Ѿl�Ŷ��H���Ѿl�~��F�L�Ѿl�h���M��
	if (isFull(chessBoard))
	{
		return 'q';
	}

	//�Y�C���������h�~��C��
	return ' ';
}


//�C���禡
void game1()
{
	//1.�إߤ@��3x3���ѽL
	int chessBoard[3][3] = { 0 };

	//2.��l�ƴѽL
	init(chessBoard);
	char winner = ' ';
	while (1)
	{
		//3.�N�ѽL�i��C�L
		printChessBoard(chessBoard);

		//4.���a���l
		playerMove(chessBoard);

		//5.�P�_�O�_�ӧQ
		winner = isWin(chessBoard);

		//�p�G�������h�~��C��
		if (winner != ' ')
		{
			break;
		}

		//7.�q�����l
		computerMove(chessBoard);

		//8.�P�_�O�_�ӧQ
		winner = isWin(chessBoard);

		//�p�G�������h�~��C��
		if (winner != ' ')
		{
			break;
		}
		//�j��ާ@3���ܹC������
	}
	printChessBoard(chessBoard);

	//�ӧQ����P�_
	if (winner == 'x')
	{
		printf("���߱z, �zĹ�F�q��!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
	else if (winner == 'o')
	{
		printf("�ܿ��, �z�s�q���������L!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
	else
	{
		printf("�ܿ��, �z��q������!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
}

void game2()
{
	//1.�إߤ@��3x3���ѽL
	int chessBoard[3][3] = { 0 };

	//2.��l�ƴѽL
	init(chessBoard);
	char winner = ' ';

	while (1)
	{
		//3.�N�ѽL�i��C�L
		printChessBoard(chessBoard);

		//4.���a1���l
		player1Move(chessBoard);

		printChessBoard(chessBoard);

		//5.�P�_�O�_�ӧQ
		winner = isWin(chessBoard);

		//�p�G�������h�~��C��
		if (winner != ' ')
		{
			break;
		}

		//7.���a2���l
		player2Move(chessBoard);

		//8.�P�_�O�_�ӧQ
		winner = isWin(chessBoard);

		//�p�G�������h�~��C��
		if (winner != ' ')
		{
			break;
		}
		//�j��ާ@3���ܹC������
	}
	printChessBoard(chessBoard);

	//�ӧQ����P�_
	if (winner == 'x')
	{
		printf("���ߪ��a1, �zĹ�F!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
	else if (winner == 'o')
	{
		printf("���ߪ��a2, �zĹ�F!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
	else
	{
		printf("�ܿ��, �z�̥���!\n\n");
		system("pause");//�e������
		system("cls");//�M������
	}
}