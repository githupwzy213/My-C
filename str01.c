#include<stdio.h>
#include<string.h>
#include<assert.h>
//前言：C语言中对字符和字符串的处理很频繁，但是C语言本身没有字符串类型的
//,字符串通常放在常量字符串中或字符数组中。字符串常量适用于对那些不做修改的字符串函数。
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest!=NULL);
//	assert(src!=NULL);//断言,防止参数为空
//	char* ret = dest;//用来返回目的数组的起始地址
//	while (*dest++ = *src++);//包含'\0'一同复制（后置++先使用，拷贝之后再++）表达式的值就是*src,当时'\0'时将其拷贝过去后跳出循环。
//	//返回目的数组的起始地址
//	return ret;
//}
//int main()
//{
//size_t strlen ( const char * str );字符串以'\0'作为结束标志，返回的是'\0'前面出现的字符个数。
//参数指向的字符串必须要以'\0'结束。注意：函数返回值为size_t是无符号数（易错）
	/*if (strlen("abc") - strlen("abcdef") > 0)
		printf("hehe\n");
	else
		printf("haha\n");*/
	//打印hehe.strlen()返回类型是size_t:(typedef unsigned __int64 size_t;)是有无符号数重命名来的
	//无符号数3和无符号数6相减=-3，-3会被当做无符号数（-3的补码当做无符号数放到内存中是个>0的数）
	// 自定义的my_strlen()通常会定义返回类型是int，此时会打印haha（-3<0)
//my_strlen():1.计数器的方法2.递归3.指针-指针.(不创建临时变量的方法）
//strcpy():char * strcpy ( char * destination, const char * source );//源数组中的'\0'也一同拷贝进目的数组
	//源字符串必须有'\0','\0'会被拷贝进去。目的字符串必须有足够大的空间。
	//char arr1[] = "abcd";
	////错误：char arr1[]={'a','b'};char*arr1[]="abcd";常量字符串不可改变。
	//char arr2[] = "def";
	//strcpy(arr1, arr2);//打印def
	//printf("%s", arr1);
	/*my_strcpy(arr1, arr2);*/
//}

void my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	//1.找到目的字符串的'\0'
	//while (*dest++ != '\0');//这条语句后*dest==*不是'\0'，源字符串被追加到'\0'后面（目的字符串中的'\0'未被覆盖）
	//因此目的数组打印结果是hello
	while (*dest!=NULL)
	{
		dest++;
	}
	//2.追加
	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';//上述追加没有吧源字符串中的'\0'追加
}
int main()
{//strcat追加字符串（不能自己给自己追加）
	//char arr1[] = "hello";//会打印helloword,但是会报错。以上编译有错误。
	char arr1[30] = "hello\0*******";//目的数组空间要足够大能够放下两个字符串，必须有'\0'，源字符窜中的字符追加到'\0'上和'\0'的后面。
	char arr2[] = "world";//源头里的'\0'也被追加到目的字符串中。
	//strcat(arr1, arr2);
	
	my_strcat(arr1, arr2);
	printf("%s", arr1);

	return 0;
}
//int main()
//{
//	//int c;
//	//char c;//两种初始化都可以，printf（）打印初始化的形式
//	//c=getchar();
//	//putchar(c);//在终端输出字符c
//	//return 0;
//
//	char arr1[10] = { 0 };
//	gets(arr1);//输入abcd ef打印abcd ef
//	puts(arr1);//可以打印字符窜
//	//scanf("%s", arr1);//输入abcd ef只打印abcd
//	printf("%s", arr1);
//	//putchar(arr1[0]);输出arr1[0]
//}