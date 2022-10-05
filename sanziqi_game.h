#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] =' ';//将键盘初始换成空格
		}
	}
}
//打印棋盘
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);//两个下滑下线+%c.多打印两个空格更加美观
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");//打印每一行元素之后换行

					 
					 
					 //打印行之间的分割线
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("___");//分割线是三个_
				if (j < COL - 1)
					printf("|");
			}
		}
		printf("\n");//打印每一行分割线之后换行
	}
}
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家请下棋，选择坐标\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//判断坐标是否合法
		if (x > 0 && x <= ROW && y > 0 && y <= COL)//将坐标换算成大于0的数1,1对应数组下标0,0
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//玩家棋子用*代替
				break;
			}
			else
			{
				printf("坐标已被占用\n");
				continue;
			}
				
		}
		
		else
			printf("坐标不合法\n");
	}
}
//电脑随机下棋
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("电脑随机下棋\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//电脑棋子用#代替
			break;
		}
	}

}
int Fullboard(char board[ROW][COL], int row, int col);//声明函数
//判断输赢
//返回*玩家赢、返回#电脑赢、返回A平局，返回B继续
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行棋子相同
	for (i = 0; i < ROW; i++)
	{
		//横三行棋子相同
		if (board[i][0] == board[i][1] && board[i][0]== board[i][2] && board[i][0] != ' ')
			return board[i][0];
		//竖三列棋子相同
		if (board[0][i] == board[1][i]&& board[0][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//两条斜线
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//判断棋盘是否已满
	if (Fullboard(board, ROW, COL) == 0)
	{
		return 'A';
	}
	else
		return 'B';

}
//通过判断数组是否满来确定是继续还是平局
//返回0表示棋盘已满，结果平局，返回1：继续
int Fullboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}
