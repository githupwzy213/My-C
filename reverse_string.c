#include<string.h>
#include<stdio.h>

//�ݹ鷨������Ԫ�����򣨱Ƚϸ��ӣ�
//void reverse_arr(char arr[])
//{
//	char temp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];//�����һ��Ԫ�ظ�ֵ����һ��Ԫ��
//	arr[len - 1] = '\0';//�������鳤��Ϊ��һ���ݹ���׼��
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_arr(arr + 1);//��Ԫ���Ѿ����򣬵ݹ�������һ��Ԫ�غ͵����ڶ���Ԫ��
//	}
//	arr[len - 1] = temp;//�����һ��Ԫ�ظ�ֵΪ��һ��Ԫ��
//}
//
//int main()
//{
//	int i = 0;
//	char arr[] = "abcdef";
//	int str = strlen(arr);
//	reverse_arr(arr);
//	printf("�����Ԫ��˳��");
//	for (i = 0; i < str; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	
//}
