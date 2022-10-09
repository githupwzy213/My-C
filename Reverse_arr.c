#include"Reverse_arr.h"

//主函数，数组元素逆序
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("数组逆序前：");
	print(arr, sz);
	Reverse(arr, sz);
	//打印arr
	printf("数组逆序后：");
	print(arr, sz);


}