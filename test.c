#include<stdio.h>
//数组传参arr除了作为首元素地址以外的特例

//&arr
int main()
{
	//&arr：arr代表整个数组大小
	int arr[] = { 1,3,5 };
	printf("&arr:%p  \n", &arr);
	printf("&arr+1:%p\n", &arr + 1);
	//arr取首元素地址
	printf("arr:%p  \n", arr);
	printf("arr+1:%p\n", arr + 1);
	//arr[0]取首元素地址
	printf("&arr[0]:%p  \n", &arr[0]);
	printf("&arr[0]+1:%p\n", &arr[0] + 1);
}