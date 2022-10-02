#include<stdio.h>

//递归法打印一个整数的每一位
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("  %d", n % 10);
}
