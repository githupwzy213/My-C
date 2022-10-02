#include<stdio.h>
//函数法计算字符窜长度

//创建临时变量count
int my_strlen1(char str[])//这传参的str是个指针
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
//不创建临时变量
int my_strlen2(char *str)//参数用char str[]是等价的
{
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}