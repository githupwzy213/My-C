#include<stdio.h>

//int main()
//{
//	int a = 20;
//	int b = -10;
//	printf("%p\n", &a);//打印的是内存地址。
//	printf("%p\n", &b);
//	//在内存中&a可以得到内存中存放的值
//	//&a得到内存中放的是14 00 00 00.&b得到内存中存放f6 ff ff ff
//	return 0;
//}

//简述大小端字节序概念。设计程序判断当前机器的字节顺序。
//int a=1;内存中，大端：00 00 00 01小端：01 00 00 00
int main()
{
	int a = 1;
	char* p = &a;//如果不兼容用：char*p=(char*)&p;
	//将整型地址截断取两个字节。只访问前两个字节
	if (*p == 1)
		printf("小端字节\n");
	else
		printf("大端字节");
	return 0;
}