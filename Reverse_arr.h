
#include<stdio.h>
//������Ԫ������
void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int temp = 0;
	while (left < right)
	{
		temp = arr[left];//�����м����
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
//��ӡ����Ԫ��
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

}