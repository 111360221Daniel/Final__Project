#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>

//OOXX�C��

//�@�P�إߤ@�ӹC�����
//���禡
int menu()
{
	printf("\n========================\n");
	printf("��J0:�����C��\n");
	printf("��J1:��H�Ҧ�\n");
	printf("��J2:���H�Ҧ�\n");
	printf("========================\n");
	printf("�п�J�z�����: ");
	int num = -1;
	scanf("%d", &num);//�Q����L��J�ﶵ
	return num;//�N�ﶵ�Ȫ�^��D�禡���i��P�_
}

//�G�P�C�����e
//�ѽL��l��
void init(char chessBoard[3][3])
{
	//��}�C�����C�Ӥ������]�����Ů桨
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			chessBoard[row][col] = ' ';
		}
	}
}

//�C�L�ѽL
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

//���a���l��x��
void playerMove(char chessBoard[3][3])
{
	while (1)
	{
		printf("�п�J�A�n�U�Ѫ��y�С]�C�A��^:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//�︨�l�i��P�_
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//��X�V�������a���s��J
			printf("�z���y�Ф��b���T�d��!\n\n");
			continue;
		}

		//���窱�a���l��m�O�_�w�g���l�F
		if (chessBoard[row][col] != ' ')
		{
			printf("�z���y�Ц�m�w�g���l�F!\n\n");
			continue;
		}

		//�̲׸��l
		chessBoard[row][col] = 'x';
		break;
	}
}

//�q�����l��o��
void computerMove(char chessBoard[3][3])
{
	while (1)
	{
		int row = rand() % 3;//�]�w�H�������Ѥl���b�ѽL��
		int col = rand() % 3;

		//�︨�l�i��P�_
		//���窱�a���l��m�O�_�w�g���l�F
		if (chessBoard[row][col] != ' ')
		{
			continue;
		}

		//�̲׸��l
		chessBoard[row][col] = 'o';
		break;
	}
}

void player1Move(char chessBoard[3][3])
{
	while (1)
	{
		printf("�п�J���a1�n�U�Ѫ��y�С]�C�A��^:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//�︨�l�i��P�_
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//��X�V�������a���s��J
			printf("�z���y�Ф��b���T�d��!\n\n");
			continue;
		}

		//���窱�a���l��m�O�_�w�g���l�F
		if (chessBoard[row][col] != ' ')
		{
			printf("�z���y�Ц�m�w�g���l�F!\n\n");
			continue;
		}

		//�̲׸��l
		chessBoard[row][col] = 'x';
		break;
	}
}

void player2Move(char chessBoard[3][3])
{
	while (1)
	{
		printf("�п�J���a2�n�U�Ѫ��y�С]�C�A��^:\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);

		//�︨�l�i��P�_
		if (row < 0 || row >= 3 || col < 0 || col >= 3)
		{
			//��J�V�������a���s��J
			printf("�z���y�Ф��b���T�d��!\n\n");
			continue;
		}

		//���窱�a���l��m�O�_�w�g���l�F
		if (chessBoard[row][col] != ' ')
		{
			printf("�z���y�Ц�m�w�g���l�F!\n\n");
			continue;
		}

		//�̲׸��l
		chessBoard[row][col] = 'o';
		break;
	}
}
