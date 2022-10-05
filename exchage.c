#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a=%d b=%d\n", a, b);

	//不创建临时变量交换两个整数
	//利用按位或^
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/

	//加减法交换数据
	//该算法有缺陷，如果数据较大可能会溢出
	a = a + b;
	b = a - b;
	a = a - b;

	printf("交换后a=%d b=%d\n", a, b);
	return 0;
}

