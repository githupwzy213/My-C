#include<stdio.h>
int main()
{
	/*int i = 0, a = 0, b = 2, c = 3, d = 4;*/
	/*i = a++ && ++b && d++;*/
	/*printf("%d %d %d %d", a, b, c, d);*/
	//打印1 2 3 4 。a++返回0，所以后面的运算不再进行

	/*int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ || ++b || d++;
	printf("%d %d %d %d", a, b, c, d);*/
	//打印2 2 3 4.a++返回1，所以后面的运算没有执行

	//逗号表达式
	int a = 1;
	int b = 2;
	int c = (a > b, a = a + 10, a++, b = a + 1);
	//c的值取括号里最后一个表达式的值
	printf("%d", c);//打印13
	if(a=b+1,c=a/2,d>0)//等价if(d>0)
}