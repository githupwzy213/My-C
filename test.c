#include"game.h"
//猜数字游戏
//1.电脑生成一个随机数字。2.猜数字（猜错会提示猜大或猜小）可重复出现
int main()
{

	////time返回的time_t是long整形，所以可以加上unsigned。时间戳：当前计算机时间-计算机起止时间1970.1.1.0:0:0
	//srand((unsigned)time(NULL));//由于只是用一次所以放在主函数中就可以。时间戳time(NULL)引用头文件timel.h
	//
	//
	//int input = 0;
	//do
	//{
	//	menu();
	//	scanf("%d",&input);//这里如果加\n则导致输入的第一个数字不能被input读取。只有换行再输入一个数字第一个数字才被input读取
	//	switch (input)
	//	{
	//	case 1:
	//		game();
	//		break;
	//	case 0:
	//		printf("退出游戏\n");
	//		break;
	//	default:
	//		printf("输入错误\n");
	//		break;
	//	}
	//	
	//} 
	//while (input);
	//return 0;
	//

}