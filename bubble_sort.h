#include<stdio.h>
//��������һ��whileѭ����һ��forѭ����
void bubble_sort1(int arr[], int sz)
{
	int i = 0;
	while (sz - i)//ÿһ��ȷ��һ���ϴ�Ԫ�ء���ȫ��Ԫ��λ�ö�ȷ�����˳�ѭ�����������  
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)//�����i��Ԫ����ȷ��λ�ã������ٱȽ�
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			
		}
		i++;//ȷ��i ��Ԫ��λ��
	}
}
//��ӡ
int print(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
