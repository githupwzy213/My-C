#include<stdio.h>

//ʹ��ָ���ӡ���飨�������±꣩
void pointer_print(int* p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));//ָ������ô�ӡ����Ԫ��
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	pointer_print(arr, sz);
	return 0;
}