#include<stdio.h>
//杨氏矩阵问题：有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的，
//编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O（n)
//1,2,3 1,2,3
//4,5,6 2,3,4
//7,8,9 3,4,5
int FindNum1(int arr[3][3],int num,int row,int col)
{
	//右上角元素下标
	int x = 0;
	int y = col - 1;
	while (x<row&&col>=0)//数组行列必须满足的条件
	{
		if (num < arr[x][y])//右上角元素下标是0，col-1
			col--;
		else if (num > arr[x][y])
			row++;
		else
			return 1;//如果要打印坐标最好不要在函数内用printf函数
		//return x,y;这种写法也是错误的，返回的是逗号表达式的值即y的值
	}
	return 0;
}
int FindNum2(int arr[3][3], int num,int *px,int *py)
{
	//右上角元素下标
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)//数组行列必须满足的条件
	{
		if (num < arr[x][y])//右上角元素下标是0，col-1
			y--;
		else if (num > arr[x][y])
			x++;
		else
		{
			*py = y;
			*px = x;
			return 1;//如果要打印坐标最好不要在函数内用printf函数
		}
		//return x,y;这种写法也是错误的，返回的是逗号表达式的值即y的值
	}
	return 0;
}
int main()
{
	//由于要求复杂度小于O(n)所以不能遍历数组（右上，左下都可以用来判断，左上右下不可以）
	//右上角元素是一行中最大，一列中最小的
	//当右上角元素<k则消去这一行元素
	//当右上角元素>k则消去一列
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int num = 7;
	//int ret = FindNum1(arr,num,3,3);
	//用返回型参数返回元素下标
	int x = 3;
	int y = 3;
	int ret = FindNum2(arr, num, &x,&y);//要传地址不能直接传x,y(形参改变不影响实参）
	if (ret == 1)
		printf("找到了，下标是：%d,%d\n",x,y);
	else
		printf("元素不存在\n");
	return 0;
}