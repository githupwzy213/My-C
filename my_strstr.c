#include<stdio.h>
#include<string.h>

//strstr:�������ַ���
//const char * strstr ( const char * str1, const char * str2 );
//����NULL���Ӵܵ�ַ
//NULL--��ָ�롣NUL/Null-'\0'
char* my_strstr(char* p1,char* p2)
{
	char* s1 = p1;//��s1��Ϊ�Ӵܵ�ַ����
	char* s2 = p2;
	int i = 0;
	int j = 0;
	int len1 = (int)strlen(p1);
	int len2 = (int)strlen(p2);
	if (len2 == 0)
		return s1;//���p2�ǿ��ַ����򷵻�s1(���������п��ޣ���len2=0ʱj>=len2ͬ������s1)
	for (i=0;i<=len1-len2;i++)//�Ӵܵ�ַֻ������ǰlen1-len2��Ԫ���еĵ�һ����ַ��ʣ��Ԫ�س��ȱ�����ڵ����Ӵܳ���
	{
		for (j = 0; j < len2; j++)
		{
			if (*(s2 + j) != *(s1 + j))
				break;
		}
		if (j >= len2)
		{
			return s1;
		}
		s1++;//�Ӵܵ�ַ����p1�е�ǰlen1-len2��Ԫ�ص�ַ

	}
	if (i > len1 - len2)
		return NULL;
}
int main()
{
	char* p1 = "abcdefabbdeef";
	char* p2 = "abb";
	char* ret = strstr(p1, p2);//��p1����p2
	char* ret2 = my_strstr(p1, p2);
	//��һ�γ��ֵĵ�ַ
	if (ret2 == NULL)
		printf("�Ӵܲ�����");
	else
		printf("%s", ret2);//��ӡdef
	return 0;
}