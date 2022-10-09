
#include<stdio.h>
//将数组元素逆序
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		temp = arr[left];//建立中间变量
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
//打印数组元素
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}