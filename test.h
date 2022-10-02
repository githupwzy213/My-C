#include<stdio.h>
//判断闰年函数
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}
//二分法查找元素
void binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;//mid要放在循环语句内。
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了元素下标是：%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("元素不存在");
	}
	
}
//编写一个函数，没次调用这个函数num值加一
void Add(int* p)
{
	(*p)++;
}
//函数嵌套调用
void new_line()
{
	printf("hehe\n");
}
void three_line()
{
	int i = 0;
	for (i = 1; i <= 3; i++)
	{
		new_line();
	}
}