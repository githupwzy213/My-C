
#include<stdio.h>
//�ݹ���һ����ÿλ֮��

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
	printf("����������num��");
	scanf("%d", &num);
	int ret = Digitsum(num);
	printf("λ����ret=%d",ret);
}