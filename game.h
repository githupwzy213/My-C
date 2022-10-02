#include<stdlib.h>
#include<time.h>

#include<stdio.h>
//猜数字游戏菜单
void menu()
{
	printf("########游戏开始########\n");
	printf("######## 1.play 0.exit########\n");
	printf("play or exit\n");
}
//猜数字游戏程序
void game()
{
	//生成随机数
	int ret = 0;
	int guss = 0;
	ret = rand()%100+1;//rand()生成随机数字0-RADN_MAX.引用rand必须要先引用srand
	//猜数字
	while (1)
	{
		
		printf("请输入数字\n");
		scanf("%d",&guss);
		if (guss == ret)
		{
			printf("猜对了\n");
			break;
		}
		else if (guss < ret)
			printf("猜小了\n");
		else
			printf("猜大了\n");
	}

	
}