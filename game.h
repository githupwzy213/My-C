#include<stdlib.h>
#include<time.h>

#include<stdio.h>
//��������Ϸ�˵�
void menu()
{
	printf("########��Ϸ��ʼ########\n");
	printf("######## 1.play 0.exit########\n");
	printf("play or exit\n");
}
//��������Ϸ����
void game()
{
	//���������
	int ret = 0;
	int guss = 0;
	ret = rand()%100+1;//rand()�����������0-RADN_MAX.����rand����Ҫ������srand
	//������
	while (1)
	{
		
		printf("����������\n");
		scanf("%d",&guss);
		if (guss == ret)
		{
			printf("�¶���\n");
			break;
		}
		else if (guss < ret)
			printf("��С��\n");
		else
			printf("�´���\n");
	}

	
}