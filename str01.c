#include<stdio.h>
#include<string.h>
#include<assert.h>
//ǰ�ԣ�C�����ж��ַ����ַ����Ĵ����Ƶ��������C���Ա���û���ַ������͵�
//,�ַ���ͨ�����ڳ����ַ����л��ַ������С��ַ������������ڶ���Щ�����޸ĵ��ַ���������
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest!=NULL);
//	assert(src!=NULL);//����,��ֹ����Ϊ��
//	char* ret = dest;//��������Ŀ���������ʼ��ַ
//	while (*dest++ = *src++);//����'\0'һͬ���ƣ�����++��ʹ�ã�����֮����++�����ʽ��ֵ����*src,��ʱ'\0'ʱ���俽����ȥ������ѭ����
//	//����Ŀ���������ʼ��ַ
//	return ret;
//}
//int main()
//{
//size_t strlen ( const char * str );�ַ�����'\0'��Ϊ������־�����ص���'\0'ǰ����ֵ��ַ�������
//����ָ����ַ�������Ҫ��'\0'������ע�⣺��������ֵΪsize_t���޷��������״�
	/*if (strlen("abc") - strlen("abcdef") > 0)
		printf("hehe\n");
	else
		printf("haha\n");*/
	//��ӡhehe.strlen()����������size_t:(typedef unsigned __int64 size_t;)�����޷���������������
	//�޷�����3���޷�����6���=-3��-3�ᱻ�����޷�������-3�Ĳ��뵱���޷������ŵ��ڴ����Ǹ�>0������
	// �Զ����my_strlen()ͨ���ᶨ�巵��������int����ʱ���ӡhaha��-3<0)
//my_strlen():1.�������ķ���2.�ݹ�3.ָ��-ָ��.(��������ʱ�����ķ�����
//strcpy():char * strcpy ( char * destination, const char * source );//Դ�����е�'\0'Ҳһͬ������Ŀ������
	//Դ�ַ���������'\0','\0'�ᱻ������ȥ��Ŀ���ַ����������㹻��Ŀռ䡣
	//char arr1[] = "abcd";
	////����char arr1[]={'a','b'};char*arr1[]="abcd";�����ַ������ɸı䡣
	//char arr2[] = "def";
	//strcpy(arr1, arr2);//��ӡdef
	//printf("%s", arr1);
	/*my_strcpy(arr1, arr2);*/
//}

void my_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	//1.�ҵ�Ŀ���ַ�����'\0'
	//while (*dest++ != '\0');//��������*dest==*����'\0'��Դ�ַ�����׷�ӵ�'\0'���棨Ŀ���ַ����е�'\0'δ�����ǣ�
	//���Ŀ�������ӡ�����hello
	while (*dest!=NULL)
	{
		dest++;
	}
	//2.׷��
	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';//����׷��û�а�Դ�ַ����е�'\0'׷��
}
int main()
{//strcat׷���ַ����������Լ����Լ�׷�ӣ�
	//char arr1[] = "hello";//���ӡhelloword,���ǻᱨ�����ϱ����д���
	char arr1[30] = "hello\0*******";//Ŀ������ռ�Ҫ�㹻���ܹ����������ַ�����������'\0'��Դ�ַ����е��ַ�׷�ӵ�'\0'�Ϻ�'\0'�ĺ��档
	char arr2[] = "world";//Դͷ���'\0'Ҳ��׷�ӵ�Ŀ���ַ����С�
	//strcat(arr1, arr2);
	
	my_strcat(arr1, arr2);
	printf("%s", arr1);

	return 0;
}
//int main()
//{
//	//int c;
//	//char c;//���ֳ�ʼ�������ԣ�printf������ӡ��ʼ������ʽ
//	//c=getchar();
//	//putchar(c);//���ն�����ַ�c
//	//return 0;
//
//	char arr1[10] = { 0 };
//	gets(arr1);//����abcd ef��ӡabcd ef
//	puts(arr1);//���Դ�ӡ�ַ���
//	//scanf("%s", arr1);//����abcd efֻ��ӡabcd
//	printf("%s", arr1);
//	//putchar(arr1[0]);���arr1[0]
//}