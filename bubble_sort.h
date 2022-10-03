#include<stdio.h>
//排序（利用一个while循环和一个for循环）
void bubble_sort1(int arr[], int sz)
{
	int i = 0;
	while (sz - i)//每一趟确定一个较大元素。当全部元素位置都确定后退出循环，排序完成  
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)//后面的i个元素已确定位置，无需再比较
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
		i++;//确定i 个元素位置
	}
}
//打印
int print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
