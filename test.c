#include<stdio.h>
//���鴫��arr������Ϊ��Ԫ�ص�ַ���������

//&arr
int main()
{
	//&arr��arr�������������С
	int arr[] = { 1,3,5 };
	printf("&arr:%p  \n", &arr);
	printf("&arr+1:%p\n", &arr + 1);
	//arrȡ��Ԫ�ص�ַ
	printf("arr:%p  \n", arr);
	printf("arr+1:%p\n", arr + 1);
	//arr[0]ȡ��Ԫ�ص�ַ
	printf("&arr[0]:%p  \n", &arr[0]);
	printf("&arr[0]+1:%p\n", &arr[0] + 1);
}