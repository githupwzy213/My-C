#include"bubble_sort.h"
//ð������:����Ԫ�رȽ�
//10,9,8,7,6��5,4,3,2,1���򣺵�һ��ð��9,8,7,6��5,4,3,2,1��10�ڶ���8,7,6��5,4,3,2,1��9,10
//��һ�αȽ�9�εڶ��˱Ƚ�8�Ρ���
int main()
{
	int arr[] = {10,8,9,4,3,1,2,7,6,5};//����ԭ��˳������
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����ǰ��");
	print(arr, sz);
	bubble_sort1(arr, sz);
	printf("�����");
	print(arr, sz);
	return 0;
}