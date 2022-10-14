#include<stdio.h>

//笔试题
int main()
{
	char arr1[] = "abcdef";
	char arr2 [] = "abcdef";
	char* p1 = "abcdef";//加上const更好
	char* p2 = "abcdef";
	if (arr1 == arr2)
		printf("a\n");
	else
		printf("b\n");
	//打印b。arr1和arr2分别是两个数组，空间位置不同，arr1和arr2分别是两个数组首元素地址
	//不相同，所以返回b

	if (p1 == p2)
		printf("a\n");
	else
		printf("b\n");
	//打印a。p1和p2都是a的地址char* p1 = "abcdef";
	//char* p2 = "abcdef";这里的abcdef\0是常量字符窜，内存中只存一份，
	//所以p1和p2都是其实起始字符a的地址。
	return 0;
}