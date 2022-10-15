#include<stdio.h>

//int main()
//{
//
//	//代码1
//	(*(void(*)())0)();//void(*)()是函数指针（参数是无参返回类型是void）,
//	//(void(*)())0将0强制类型转换为函数指针类型（那么0就是函数地址）
//	//(*(void(*)())0)()调用0地址处的函数（函数无参返回类型是void)
//	
//	//代码2
//	void(*signal(int, void(*)(int)))(int);//signal()是个函数声明，参数是int和函数指针void(*)(int)
// （该函数指针指向的函数是void参数是int返回类型是void）
//	//signal的返回类型是函数指针（这个函数指针指向的函数的参数是int返回类型是void)
//	
//	//这个代码不可以写成void(*)(int) signal(int,void(*)(int)).
//	//这种写法的void中的*没有与signal结合因为*号要与名字结合
//
//	//代码2精简
//	//用typedef定义类型，如：typedef unsigned int uint将unsigned重命名为uint
//	//将函数指针类型void(*)(int)定义为pfun_t,不可以写成 typedef void(*)(int) pfun_t
//	
//	//正确定义方法是：typedef void(*pfun_t)(int)
//	//代码2就等价于下面两句代码
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	return 0;
//}

//函数指针数组:存放函数地址

int Add(int x, int y)
{
	return x+y;//加法
}
int Sub(int x, int y)
{
	return x - y;//减法
}
int Mul(int x, int y)
{
	return x * y;//乘法
}
int Div(int x, int y)
{
	return x / y;//除法
}

int main()
{
	//指针数组
	int* arr[5];
	int(*pa)(int, int) = Add;//用函数指针pa存放函数Add（Sub/Mul/Div）的地址
	//创建一个数组存放4个函数地址-函数指针数组
	int (*parr[4])(int, int)={Add,Sub,Mul,Div};
	//parr是数组名，int (*)(int, int)（函数指针）是数组元素类型

	//调用数组内的函数
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", parr[i](2, 3));//解引用*可以省略
		//依次打印(2+3=5,2-3=-1,2*3=6,2/3=0.)5 -1 6 0
	}
}

//函数指针写法1.
//int (*arr[])();//正确语法
//int* parr2[10]();//下面两句都是错误语法无意义
//int (*)()parr3[10];

//函数指针数组练习
char* my_strcpy(char* dest, const char* src);
//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组pfArr,能够存放4个my_strcpy函数的地址