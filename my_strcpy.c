#include<stdio.h>
#include<string.h>
//优化方案，将源数组拷贝到目的数组，并且保留目的数组后面的元素
void my_strcpy(char arr3[], char arr1[])
{
	char* p = &arr1[0];//这里不能用&arr。&arr是整个数组的地址
	char* q = &arr3[0];
	while (*p != '\0')//将数组arr1除'\0'以外的元素拷贝进arr3
	{
		*q = *p;
		p++;
		q++;
	}
}

//将字符arr1中的内容拷贝到arr2中
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "#############";
	char arr3[] = "**************";
	//利用库函数strcpy
	strcpy(arr2, arr1);
	printf("%s\n", arr2);//打印abcdef库函数将arr1中的'\0'也拷贝进arr2中了，
						//所以arr2后面的元素不再打印
	my_strcpy(arr3, arr1);
	printf("%s", arr3);//打印abcdef********
}