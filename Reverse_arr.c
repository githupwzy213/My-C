#include"Reverse_arr.h"

//������������Ԫ������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("��������ǰ��");
	print(arr, sz);
	Reverse(arr, sz);
	//��ӡarr
	printf("���������");
	print(arr, sz);


}