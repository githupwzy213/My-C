#include<stdio.h>

//�ݹ鷨��ӡһ��������ÿһλ
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("  %d", n % 10);
}
