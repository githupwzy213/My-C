#include<stdio.h>
int main()
{
	//const int num = 10;//const修饰num后仍打印20.这里的指针p被改动了。
	//int* p = &num;
	///*const int* p = &num;*/
	////const 修饰指针p 后报错。改不了。
	//*p = 20;
	//printf("%d", num);
	//return 0;

	//const放在指针变量*左边，修饰*p：不能通过p修改*p的值但是可以更改p
	//const放在指针变量*右边，修饰p，p不能被改变。
	//int num = 0;
	//int* const q = &num;
	//int n = 30;
	//q = &n;//报错。q被const修饰不能改变
}