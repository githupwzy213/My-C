#include<stdio.h>
#include<string.h>
//�Ż���������Դ���鿽����Ŀ�����飬���ұ���Ŀ����������Ԫ��
void my_strcpy(char arr3[], char arr1[])
{
	char* p = &arr1[0];//���ﲻ����&arr��&arr����������ĵ�ַ
	char* q = &arr3[0];
	while (*p != '\0')//������arr1��'\0'�����Ԫ�ؿ�����arr3
	{
		*q = *p;
		p++;
		q++;
	}
}

//���ַ�arr1�е����ݿ�����arr2��
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "#############";
	char arr3[] = "**************";
	//���ÿ⺯��strcpy
	strcpy(arr2, arr1);
	printf("%s\n", arr2);//��ӡabcdef�⺯����arr1�е�'\0'Ҳ������arr2���ˣ�
						//����arr2�����Ԫ�ز��ٴ�ӡ
	my_strcpy(arr3, arr1);
	printf("%s", arr3);//��ӡabcdef********
}