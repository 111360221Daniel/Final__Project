int main()
{
	system("color E0");//�C���ܤ�
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("  *******     *******     *     *     *     *       ***         *       **    **    *******\n");
	printf("  *     *     *     *      *   *       *   *       *   *       * *      * *  * *    *\n");
	printf("  *     *     *     *       * *         * *       *           *   *     * *  * *    *\n");
	printf("  *     *     *     *        *           *       *   ****    *******    *  **  *    *******\n");
	printf("  *     *     *     *       * *         * *       *    **    *     *    *      *    *\n");
	printf("  *     *     *     *      *   *       *   *       *  * *    *     *    *      *    *\n");
	printf("  *******     *******     *     *     *     *       **  *    *     *    *      *    *******\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");//�e������
	system("cls");//�M������

	srand((unsigned int)time(0));//�ήɶ��]�w�@���H���ؤl

	while (1)
	{
		//�@�P�إߤ@�ӹC�����
		int choice = menu();//���禡

		if (choice == 0)
		{
			system("cls");//�M������
			system("color 02");//�C���ܤ�
			printf("\n�T�w������?\n\n");

			//�@�P�إߤ@�ӹC�����
			int choice = menu();//���禡

			if (choice == 0)
			{
				system("cls");//�M������
				system("color 02");//�C���ܤ�
				printf("\n���@�U��~�D�D�A�F!\n\n");

				//�@�P�إߤ@�ӹC�����
				int choice = menu();//���禡

				if (choice == 0)
				{
					system("cls");//�M������
					system("color 02");//�C���ܤ�
					printf("\n�n�aQQ\n\n");
					break;
				}
				else if (choice == 1)
				{
					system("cls");//�M������
					system("color 0C");//�C���ܤ�
					printf("\n �i��H�Ҧ��j\n\n");
					printf("���`�N�ƶ�:\n");
					printf(" ��.���a�Ѥl��ܬ�x�F�q����o\n");
					printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
					game1();//�C��1�禡
				}
				else if (choice == 2)
				{
					system("cls");//�M������
					system("color 0B");//�C���ܤ�
					printf("\n �i���H�Ҧ��j\n\n");
					printf("���`�N�ƶ�:\n");
					printf(" ��.���a1�Ѥl��ܬ�x�F���a2��o\n");
					printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
					game2();//�C��2�禡
				}
				else
				{
					system("cls");//�M������
					printf("�z��J�����~�A�Э��s��J!\n\n");
				}
			}
			else if (choice == 1)
			{
				system("cls");//�M������
				system("color 0C");//�C���ܤ�
				printf("\n �i��H�Ҧ��j\n\n");
				printf("���`�N�ƶ�:\n");
				printf(" ��.���a�Ѥl��ܬ�x�F�q����o\n");
				printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
				game1();//�C��1�禡
			}
			else if (choice == 2)
			{
				system("cls");//�M������
				system("color 0B");//�C���ܤ�
				printf("\n �i���H�Ҧ��j\n\n");
				printf("���`�N�ƶ�:\n");
				printf(" ��.���a1�Ѥl��ܬ�x�F���a2��o\n");
				printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
				game2();//�C��2�禡
			}
			else
			{
				system("cls");//�M������
				printf("�z��J�����~�A�Э��s��J!\n\n");
			}
		}
		else if (choice == 1)
		{
			system("cls");//�M������
			system("color 0C");//�C���ܤ�
			printf("\n �i��H�Ҧ��j\n\n");
			printf("���`�N�ƶ�:\n");
			printf(" ��.���a�Ѥl��ܬ�x�F�q����o\n");
			printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
			game1();//�C��1�禡
		}
		else if (choice == 2)
		{
			system("cls");//�M������
			system("color 0B");//�C���ܤ�
			printf("\n �i���H�Ҧ��j\n\n");
			printf("���`�N�ƶ�:\n");
			printf(" ��.���a1�Ѥl��ܬ�x�F���a2��o\n");
			printf(" ��.�C��楿�T�d��Ҭ�0~2\n");
			game2();//�C��2�禡
		}
		else
		{
			system("cls");//�M������
			printf("�z��J�����~�A�Э��s��J!\n\n");
		}
	}

	system("pause");
	return 0;
}