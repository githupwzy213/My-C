#include<stdio.h>
//��ӡ����
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}

//����������Ԫ��
int main()
{
	int arr1[] = {1,3,5,7,9};
	int arr2[] = {2,4,6,8,10};
	int i = 0;
	int temp = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("����ǰ��\n");
	printf("arr1[]:");
	print(arr1, sz);
	printf("arr2[]:");
	print(arr2, sz);
	printf("\n");
	
	//��������Ԫ��
	for (i = 0; i < sz; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	printf("������\n");
	printf("arr1[]:");
	print(arr1, sz);
	printf("arr2[]:");
	print(arr2, sz);
	return 0;
}