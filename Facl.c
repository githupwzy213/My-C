#include<stdio.h>
//�ݹ����n!
int Facl();
int main()
{
	int num = 0;
	printf("������n:");
	scanf("%d", &num);
	int ret = Facl(num);//ret=n!
	printf("n!=%d", ret);
}

int Facl(int num)
{
	//�ݹ�ʵ��
	if (num > 1)
	{
		return num * Facl(num - 1);
	}
	else
		return 1;
	return 0;
}