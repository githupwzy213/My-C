#include<stdio.h>
#include <string.h>

//strtok
//char* strtok(char* str, const char* delimiters);
//  const char* delimiters���ָ����ַ�����
// char* str���и���ַ���
//ͨ���ָ��������ַ����ָ����str���ҵ���һ����ǲ�������Ϊ'\0'��βȻ�󷵻�һ��ָ�������ǵ�ָ��
//strtok��ı��ַ��ܣ�����strtok�и���ַ���һ����һ����ʱ�������ַ���
//������һ��������ΪNULL���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
//��һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULL

int main()
{
    char arr[] = "abcd@ef!gh";
    char* p = "@!";
    char cpy[100] = "0";
    strcpy(cpy, arr);
   // char* ret = strtok(cpy, p);//��һ�β�������ΪNULL,�ҵ���һ����ǲ���ס�����ǡ�
   // printf("%s\n", ret);
   // ret = strtok(NULL, p);//�ڶ��β���ΪNULL�����ϴα���ı�ʶ��λ�ÿ�ʼ������һ�����
   // printf("%s\n", ret);
   // ret = strtok(NULL, p);
   // printf("%s\n", ret);
   ////��ӡabcd  ef  gh
//������ӡ�������滻Ϊѭ�����
    char* ret = NULL;
    for (ret = strtok(cpy, p); ret != NULL; ret = strtok(NULL, p))
    {//
        printf("%s\n", ret);
        ////��ӡabcd  ef  gh
    }
    return 0;
}