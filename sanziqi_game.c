//�ж���Ӯ���ֻ���bugδ���
#include"sanziqi_game.h"
//�˵�
void menu()
{
	printf("##################\n");
	printf("####1.play 0.exit####\n");
	
}
//��Ϸʵ��
void game()
{
	char ret = '0';
	//������ά����������
	char board[ROW][COL];
	//��ʼ������ȫ���ո�
	Initboard(board,ROW,COL);
	//��ӡ����
	Display(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		//��ӡ����
		Display(board, ROW, COL);
		//�ж��Ƿ�������壨��ĳһ��Ӯʱ����������ʱ������while��
		if (Iswin(board, ROW, COL) != 'B')
			break;

		//��������
		Computermove(board, ROW, COL);
		//��ӡ����
		Display(board, ROW, COL);
		//�ж��Ƿ�������壨��ĳһ��Ӯʱ����������ʱ������while��
		if (Iswin(board, ROW, COL) != 'B')
			break;
		
	}
	//����while���ж���Ӯ�������ƽ��
	if (Iswin(board, ROW, COL) == '*')
	{
		printf("���Ӯ\n");
	}
	else if (Iswin(board, ROW, COL) == '#')
	{
		printf("����Ӯ\n");
	}
	else if (Iswin(board, ROW, COL) == 'A')
	{
		printf("ƽ��\n");
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();//�˵�

		printf("��ѡ��");
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
			printf("�������\n");
			break;
		}
		}
	} while (input);


	
}