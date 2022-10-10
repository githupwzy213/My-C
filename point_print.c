#include<stdio.h>

//使用指针打印数组（不适用下标）
void pointer_print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));//指针解引用打印数组元素
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	pointer_print(arr, sz);
	return 0;
}