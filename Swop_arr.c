#include<stdio.h>
//打印数组
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

//交换两数组元素
int main()
{
	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4,6,8,10};
	int i = 0;
	int temp = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("交换前：\n");
	printf("arr1[]:");
	print(arr1, sz);
	printf("arr2[]:");
	print(arr2, sz);
	printf("\n");
	
	//交换数组元素
	for (i = 0; i < sz; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("交换后：\n");
	printf("arr1[]:");
	print(arr1, sz);
	printf("arr2[]:");
	print(arr2, sz);
	return 0;
}