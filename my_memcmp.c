#include<stdio.h>
#include<string.h>
////memcmp:�ڴ�Ƚ�
////int memcmp(const void* ptr1, const void* ptr2, size_t num);
////��ptr1��ptr2��ʼ��num���ֽ�����
////1.��num���ֽ�ȫ�����ʱ����0
////2.�״γ���1���ֽ����ݲ����*(ptr1+i)>*(ptr2+i)����>0
////3.�״γ���1���ֽ����� * (ptr1 + i) < *(ptr2 + i)����<0
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int arr3[] = { 1,2,3,4,0 };
//	char str1[] = "abcd";
//	char str2[] = "acbd";
//	int ret = memcmp(arr1, arr2,20);//����-1
//	ret = memcmp(arr1, arr3, 20);//����1
//	ret = memcmp(str1, str2, 4);//����-1
//	printf("%d", ret);
//	return 0;
//}

//memset�ڴ�����void * memset ( void * ptr, int value, size_t num );
//valueҪ���õ��ַ���num�����ö����ֽ�

int main()
{
	char arr1[] = "#########";
	memset(arr1, '*', 3);//������ǰ�����ַ�����Ϊ*.arr1[]="***######"
	int arr2[5] = { 0 };
	memset(arr2, 1, 10);//���ڴ�ǰ10�ֽ���������Ϊ1:16����01010101 01010101 01010000 00000000 00000000 
	//16843009 16843009 257 0
	

	return 0;
}

