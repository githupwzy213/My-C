#include<stdio.h>
#include<string.h>
//char * strerror ( int errnum );
//������Ϣ���������ش���������Ӧ�Ĵ�����Ϣ��

//int main()
//{
//	/*������-������Ϣ
//	0-NO error
//	1-Operation not permitted
//	2-No such file or directory*/
//	//char* str = strerror(errno);//<errno.h>
//	//printf("%s\n", str);//NO error
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//��д�ķ�ʽ���ļ��������ļ�ָ��
//	if (pf == NULL)//����ļ������ڷ��ؿ�ָ�룬��ӡ������ϢNo such file or directory
//		printf("%s\n", strerror(errno));
//	else
//		printf("open file success\n");//��E:\C����\Practice_221105\Forth_practiceĿ¼������ı��ļ�test��򿪳ɹ�
//	return 0;
//}
//

#include<ctype.h>
int main()
{
	//char ch = tolower('A');//���a
	//ch = toupper('a');//���A
	//putchar(ch);
	//���ַ�����I am A STUDENT"ȫ��ת��ΪСд
	char arr[] = "I am A STUDENT";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
			arr[i] = tolower(arr[i]);
		i++;
	}
	printf("%s", arr);
	return 0;
}