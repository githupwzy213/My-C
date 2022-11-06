#include<stdio.h>
#include<string.h>
//char * strerror ( int errnum );
//错误信息函数，返回错误码所对应的错误信息。

//int main()
//{
//	/*错误码-错误信息
//	0-NO error
//	1-Operation not permitted
//	2-No such file or directory*/
//	//char* str = strerror(errno);//<errno.h>
//	//printf("%s\n", str);//NO error
//	//errno是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");//以写的方式打开文件并返回文件指针
//	if (pf == NULL)//如果文件不存在返回空指针，打印错误信息No such file or directory
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file success\n");//在E:\C语言\Practice_221105\Forth_practice目录下添加文本文件test后打开成功
//	return 0;
//}
//

#include<ctype.h>
int main()
{
	//char ch = tolower('A');//输出a
	//ch = toupper('a');//输出A
	//putchar(ch);
	//将字符串“I am A STUDENT"全部转换为小写
	char arr[] = "I am A STUDENT";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
			arr[i] = tolower(arr[i]);
		i++;
	}
	printf("%s", arr);
	return 0;
}