//判断输赢部分还有bug未解决
#include"sanziqi_game.h"
//菜单
void menu()
{
	printf("##################\n");
	printf("####1.play 0.exit####\n");
	
}
//游戏实现
void game()
{
	char ret = '0';
	//创建二维数组存放棋盘
	char board[ROW][COL];
	//初始化棋盘全部空格
	Initboard(board,ROW,COL);
	//打印键盘
	Display(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		Playermove(board, ROW, COL);
		//打印棋盘
		Display(board, ROW, COL);
		//判断是否继续下棋（当某一方赢时或者棋盘满时就跳出while）
		if (Iswin(board, ROW, COL) != 'B')
			break;

		//电脑下棋
		Computermove(board, ROW, COL);
		//打印棋盘
		Display(board, ROW, COL);
		//判断是否继续下棋（当某一方赢时或者棋盘满时就跳出while）
		if (Iswin(board, ROW, COL) != 'B')
			break;
		
	}
	//跳出while后判断输赢情况或者平局
	if (Iswin(board, ROW, COL) == '*')
	{
		printf("玩家赢\n");
	}
	else if (Iswin(board, ROW, COL) == '#')
	{
		printf("电脑赢\n");
	}
	else if (Iswin(board, ROW, COL) == 'A')
	{
		printf("平局\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//菜单

		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("exit\n");
			break;
		}
		default:
		{
			printf("输入错误\n");
			break;
		}
		}
	} while (input);


	
}