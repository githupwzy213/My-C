#include<stdio.h>
//�ж����꺯��
int is_leap_year(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		return 1;
	else
		return 0;
}
//���ַ�����Ԫ��
void binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left<=right)
	{
		int mid = (left + right) / 2;//midҪ����ѭ������ڡ�
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
			printf("�ҵ���Ԫ���±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("Ԫ�ز�����");
	}
	
}
//��дһ��������û�ε����������numֵ��һ
void Add(int* p)
{
	(*p)++;
}
//����Ƕ�׵���
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