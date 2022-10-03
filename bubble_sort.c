#include"bubble_sort.h"
//冒泡排序:相邻元素比较
//10,9,8,7,6，5,4,3,2,1升序：第一趟冒泡9,8,7,6，5,4,3,2,1，10第二趟8,7,6，5,4,3,2,1，9,10
//第一次比较9次第二趟比较8次……
int main()
{
	int arr[] = {10,8,9,4,3,1,2,7,6,5};//数组原来顺序不限制
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("排序前：");
	print(arr, sz);
	bubble_sort1(arr, sz);
	printf("排序后：");
	print(arr, sz);
	return 0;
}