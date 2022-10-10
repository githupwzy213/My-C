#include<stdio.h>

//递归计算n的k次方
//double pow(int n, int k)
//{//递归实现n的k次方
////当k是负数时特殊处理
//	if (k < 0)
//	{
//		return (1.0 / pow(n, -k));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n *pow(n, k-1);
//
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入n和k\n");
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("n的k次方等于：%f",ret); //% f打印复合型型小数
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return  0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 12; i++)
	{
		printf("hehe ");
		arr[i] = 0;//陷入死循环。arr[12]与i的地址相同，所以当arr[12]=0时i=0,陷入死循环。
	}
	return 0;
}