int main()
{
	system("color E0");//顏色變化
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("  *******     *******     *     *     *     *       ***         *       **    **    *******\n");
	printf("  *     *     *     *      *   *       *   *       *   *       * *      * *  * *    *\n");
	printf("  *     *     *     *       * *         * *       *           *   *     * *  * *    *\n");
	printf("  *     *     *     *        *           *       *   ****    *******    *  **  *    *******\n");
	printf("  *     *     *     *       * *         * *       *    **    *     *    *      *    *\n");
	printf("  *     *     *     *      *   *       *   *       *  * *    *     *    *      *    *\n");
	printf("  *******     *******     *     *     *     *       **  *    *     *    *      *    *******\n\n\n\n\n\n\n\n\n\n\n\n");
	system("pause");//畫面停止
	system("cls");//清除頁面

	srand((unsigned int)time(0));//用時間設定一個隨機種子

	while (1)
	{
		//一·建立一個遊戲選單
		int choice = menu();//選單函式

		if (choice == 0)
		{
			system("cls");//清除頁面
			system("color 02");//顏色變化
			printf("\n確定不玩嗎?\n\n");

			//一·建立一個遊戲選單
			int choice = menu();//選單函式

			if (choice == 0)
			{
				system("cls");//清除頁面
				system("color 02");//顏色變化
				printf("\n玩一下嘛~求求你了!\n\n");

				//一·建立一個遊戲選單
				int choice = menu();//選單函式

				if (choice == 0)
				{
					system("cls");//清除頁面
					system("color 02");//顏色變化
					printf("\n好吧QQ\n\n");
					break;
				}
				else if (choice == 1)
				{
					system("cls");//清除頁面
					system("color 0C");//顏色變化
					printf("\n 【單人模式】\n\n");
					printf("※注意事項:\n");
					printf(" Ⅰ.玩家棋子表示為x；電腦為o\n");
					printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
					game1();//遊戲1函式
				}
				else if (choice == 2)
				{
					system("cls");//清除頁面
					system("color 0B");//顏色變化
					printf("\n 【雙人模式】\n\n");
					printf("※注意事項:\n");
					printf(" Ⅰ.玩家1棋子表示為x；玩家2為o\n");
					printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
					game2();//遊戲2函式
				}
				else
				{
					system("cls");//清除頁面
					printf("您輸入的有誤，請重新輸入!\n\n");
				}
			}
			else if (choice == 1)
			{
				system("cls");//清除頁面
				system("color 0C");//顏色變化
				printf("\n 【單人模式】\n\n");
				printf("※注意事項:\n");
				printf(" Ⅰ.玩家棋子表示為x；電腦為o\n");
				printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
				game1();//遊戲1函式
			}
			else if (choice == 2)
			{
				system("cls");//清除頁面
				system("color 0B");//顏色變化
				printf("\n 【雙人模式】\n\n");
				printf("※注意事項:\n");
				printf(" Ⅰ.玩家1棋子表示為x；玩家2為o\n");
				printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
				game2();//遊戲2函式
			}
			else
			{
				system("cls");//清除頁面
				printf("您輸入的有誤，請重新輸入!\n\n");
			}
		}
		else if (choice == 1)
		{
			system("cls");//清除頁面
			system("color 0C");//顏色變化
			printf("\n 【單人模式】\n\n");
			printf("※注意事項:\n");
			printf(" Ⅰ.玩家棋子表示為x；電腦為o\n");
			printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
			game1();//遊戲1函式
		}
		else if (choice == 2)
		{
			system("cls");//清除頁面
			system("color 0B");//顏色變化
			printf("\n 【雙人模式】\n\n");
			printf("※注意事項:\n");
			printf(" Ⅰ.玩家1棋子表示為x；玩家2為o\n");
			printf(" Ⅱ.列跟行正確範圍皆為0~2\n");
			game2();//遊戲2函式
		}
		else
		{
			system("cls");//清除頁面
			printf("您輸入的有誤，請重新輸入!\n\n");
		}
	}

	system("pause");
	return 0;
}