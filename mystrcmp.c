#include<stdio.h>
#include<assert.h>
#include<string.h>
//strcmp:int strcmp ( const char * str1, const char * str2 );
//int main()
//{
//	//�Ƚ������ַ���
//	char* p1 = "zb";
//	char* p2 = "zbf";
//	int ret = strcmp(p1, p2);
//	//һ��һ�ԱȽ�,ֻҪ��һ���ǲ�����򷵻�ֵ��
//	//�ַ���p1<p2�򷵻�С�������������򷵻�0��p1>p2�������
//	printf("%d", ret);
//	return 0;
//}
 

//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1 && str2);//���ԣ�str1��str2����ΪNULL
//	while (*str1 == *str2)
//	{
//		//�ж�������
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 < *str2)
//		return -1;
//	else
//		return 1;*/
//	return *str1 - *str2;//ֱ�ӷ����ַ�ASCLL��ֵ��ֵ
//}
//int main()
//{
//	char* p1 = "abf";
//	char* p2 = "cbf";
//	int ret = my_strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

//int strncmp ( const char * str1, const char * str2, size_t num );
//�Ƚ��ַ�����ǰsize_t num ���ַ�
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "adjk";
//	int ret = strncmp(arr1, arr2, 2);//-1
//	printf("%d", ret);
//	return 0;
//}

//�ַ����������Ƶ��ַ�������
//strncpy:char * strncpy ( char * destination, const char * source, size_t num );
//���ƿ����ַ�����
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "hijk";
//	strncpy(arr1, arr2, 2);//hicdefg
//	strncpy(arr1, arr2, 6);//hijk��Դ�ַ��ܲ���ȫ����0
//	printf("%s", arr1);
//	return 0;
//}

//strncat:char * strncat ( char * destination, const char * source, size_t num );
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[30] = "hijk\0xxxxxxxxxxxxx";
//	char* str = strncat(arr2, arr1, 2);//hijkab
//	//׷�������ַ����Զ���׷��һ��\0
//	//���׷�Ӹ�������Դ�ַ�������Ҳֻ��׷��Դ�ַ����е��ַ�Ȼ����׷��һ��\0
//	printf("%s", str);
//	return 0;
//}