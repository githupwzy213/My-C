#include<stdio.h>
//µİ¹é¼ÆËãn!
int Facl();
int main()
{
	int num = 0;
	printf("ÇëÊäÈën:");
	scanf("%d", &num);
	int ret = Facl(num);//ret=n!
	printf("n!=%d", ret);
}

int Facl(int num)
{
	//µİ¹éÊµÏÖ
	if (num > 1)
	{
		return num * Facl(num - 1);
	}
	else
		return 1;
	return 0;
}