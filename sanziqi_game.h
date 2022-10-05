#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] =' ';//�����̳�ʼ���ɿո�
		}
	}
}
//��ӡ����
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0; 
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ",board[i][j]);//�����»�����+%c.���ӡ�����ո��������
			if (j < COL - 1)
				printf("|");
		}
		printf("\n");//��ӡÿһ��Ԫ��֮����

					 
					 
					 //��ӡ��֮��ķָ���
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("___");//�ָ���������_
				if (j < COL - 1)
					printf("|");
			}
		}
		printf("\n");//��ӡÿһ�зָ���֮����
	}
}
//�������
void Playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������壬ѡ������\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x > 0 && x <= ROW && y > 0 && y <= COL)//�����껻��ɴ���0����1,1��Ӧ�����±�0,0
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//���������*����
				break;
			}
			else
			{
				printf("�����ѱ�ռ��\n");
				continue;
			}
				
		}
		
		else
			printf("���겻�Ϸ�\n");
	}
}
//�����������
void Computermove(char board[ROW][COL], int row, int col)
{
	printf("�����������\n");
	int x = 0;
	int y = 0;
	
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//����������#����
			break;
		}
	}

}
int Fullboard(char board[ROW][COL], int row, int col);//��������
//�ж���Ӯ
//����*���Ӯ������#����Ӯ������Aƽ�֣�����B����
char Iswin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//������������ͬ
	for (i = 0; i < ROW; i++)
	{
		//������������ͬ
		if (board[i][0] == board[i][1] && board[i][0]== board[i][2] && board[i][0] != ' ')
			return board[i][0];
		//������������ͬ
		if (board[0][i] == board[1][i]&& board[0][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//����б��
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[2][0] == board[0][2] && board[2][0] != ' ')
	{
		return board[2][0];
	}
	//�ж������Ƿ�����
	if (Fullboard(board, ROW, COL) == 0)
	{
		return 'A';
	}
	else
		return 'B';

}
//ͨ���ж������Ƿ�����ȷ���Ǽ�������ƽ��
//����0��ʾ�������������ƽ�֣�����1������
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
