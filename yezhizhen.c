#include<stdio.h>

//Ұָ�롣Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;//ָ��Խ�����
//		printf("%d ", arr[i]);
//	}
//	printf("%d", arr[0]);
//	
//}

////ָ��ָ��Ŀռ��ͷ�
//int test()
//{
//	int a = 10;
//	return &a;
//}
////��������ռ�&a���ͷ�
//int main()
//{
//	int* p = test();//��Ҫʹ������ռ�ʱ������ռ��Ѿ����ͷ���
//	*p = 20;
//	printf("%d", *p);
//}
#include<stdio.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	printf("%d", *p);
	return 0;
}//������������ֵ���Ǵ����Ǵ������