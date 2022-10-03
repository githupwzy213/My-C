#include"Fib.h"

int main()
{
	//求第n个斐波那契数
	int n = 0;
	printf("请输入n:");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)//增加for循环打印1-n的所有斐波那契数
	{
		/*int ret = Fib1(i);*/
		/*int ret = Fib2(i);*/
		int ret = Fib3(i);//1-n阶台阶的所有跳法
		printf("%d ", ret);
	}
	
	//n阶台阶一次跳1或2阶，有多少种跳法


}