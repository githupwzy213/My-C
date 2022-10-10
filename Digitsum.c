
#include<stdio.h>
//递归求一个数每位之和

int Digitsum(int num)
{
	if (num > 9)
	{
		return num % 10 + Digitsum(num / 10);
	}
	else
		return num % 10;
}

int main()
{
	int num = 0;
	printf("请输入数字num：");
	scanf("%d", &num);
	int ret = Digitsum(num);
	printf("位数和ret=%d",ret);
}