
#include<stdio.h>
//求第n个斐波那契数

//递归求解
int Fib1(int n)
{
	if (n > 2)
	{
		return Fib1(n - 1) + Fib1(n - 2);//递归
	}
	else
		return 1;
}

//while循环求解
int Fib2(int n)
{
	int c = 1;
	int a = 1;
	int b = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}

//n阶台阶一次跳1或2阶，有多少种跳法
//和斐波那契数类似，F(1)=1、F（2）=f(1)+1=2:先跳一阶f(1)再跳一阶或直接跳两阶、
//F(3)=f(1)+f(2)=3先到f(1)再跳一阶或先到f(2)再跳两阶、f（4）=f(3)+f(2)
//1 2 3 5 8 ……
int Fib3(int n)
{
	if (n > 2)//两阶以上
	{
		return Fib3(n - 1) + Fib3(n - 2);
	}
	else if (n==2)//2阶台阶
	{
		return 2;
	}
	else
		return 1;
}