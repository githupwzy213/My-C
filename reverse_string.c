#include<string.h>
#include<stdio.h>

//递归法将数组元素逆序（比较复杂）
//void reverse_arr(char arr[])
//{
//	char temp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];//将最后一个元素赋值给第一个元素
//	arr[len - 1] = '\0';//缩短数组长度为下一步递归做准备
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_arr(arr + 1);//首元素已经逆序，递归逆序下一个元素和倒数第二个元素
//	}
//	arr[len - 1] = temp;//将最后一个元素赋值为第一个元素
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	int str = strlen(arr);
//	reverse_arr(arr);
//	printf("逆序后元素顺序：");
//	for (i = 0; i < str; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	
//}
