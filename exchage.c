#include<stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰa=%d b=%d\n", a, b);

	//��������ʱ����������������
	//���ð�λ��^
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/

	//�Ӽ�����������
	//���㷨��ȱ�ݣ�������ݽϴ���ܻ����
	a = a + b;
	b = a - b;
	a = a - b;

	printf("������a=%d b=%d\n", a, b);
	return 0;
}

