#include<stdio.h>
//�����������ַ��ܳ���

//������ʱ����count
int my_strlen1(char str[])//�⴫�ε�str�Ǹ�ָ��
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;

}
//��������ʱ����
int my_strlen2(char *str)//������char str[]�ǵȼ۵�
{
	if (*str != '\0')
		return 1 + my_strlen2(str + 1);
	else
		return 0;
}