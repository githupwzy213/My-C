#include<stdio.h>
//求二进制中1的个数
//利用按位与&
//n&(n-1)将消去一个1
//正负都适用
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("输入数值：");
//	scanf("%d", &num);
//	while (num)
//	{
//		num= num & (num - 1);
//		count++;
//	}
//	printf("num二进制中1的个数是：%d",count);
//
//	return 0;
//}

//求两个数二进制不同位个数
//不适用负数
//int get_differ_bit(int m,int n)
//{
//	int count = 0;
//	while (m)
//	{
//		if ((m&1)!=(n&1))
//			count++;
//		m >>= 1;//这里是算术移位，补得是符号位，所以不适用负数
//		n >>= 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int sum=get_differ_bit(m, n);
//	printf("m和n不同位个数是：%d", sum);
//}
////优化方案：创建临时变量temp=m^n;再计算temp二进制1的个数

//打印二进制中的奇数位和偶数位
void print(int x)
{
	int j = 0;
	int i = 0;
	printf("奇数位从低到高的数字是：");
	for (i = 0; i <= 30; i += 2)
	{
		printf("%d ",(x>>i)&1);//奇数数位，x>>i&1将1与二进制的第i+1位与
	}
	printf("偶数位从低到高的数字是：");
	for (j = 1; j <= 31; j += 2)
	{
		printf("%d ", (x >> j) & 1);//偶数位，x>>j&1将1与二进制的第j+1位相与
	}
}
int main()
{
	int x = 0;
	printf("输入数字x:");
	scanf("%d", &x);
	print(x);
}
