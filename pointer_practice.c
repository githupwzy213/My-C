#include<stdio.h>

//������
int main()
{
	char arr1[] = "abcdef";
	char arr2 [] = "abcdef";
	char* p1 = "abcdef";//����const����
	char* p2 = "abcdef";
	if (arr1 == arr2)
		printf("a\n");
	else
		printf("b\n");
	//��ӡb��arr1��arr2�ֱ����������飬�ռ�λ�ò�ͬ��arr1��arr2�ֱ�������������Ԫ�ص�ַ
	//����ͬ�����Է���b

	if (p1 == p2)
		printf("a\n");
	else
		printf("b\n");
	//��ӡa��p1��p2����a�ĵ�ַchar* p1 = "abcdef";
	//char* p2 = "abcdef";�����abcdef\0�ǳ����ַ��ܣ��ڴ���ֻ��һ�ݣ�
	//����p1��p2������ʵ��ʼ�ַ�a�ĵ�ַ��
	return 0;
}