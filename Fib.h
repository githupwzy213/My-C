
#include<stdio.h>
//���n��쳲�������

//�ݹ����
int Fib1(int n)
{
	if (n > 2)
	{
		return Fib1(n - 1) + Fib1(n - 2);//�ݹ�
	}
	else
		return 1;
}

//whileѭ�����
int Fib2(int n)
{
	int c = 1;
	int a = 1;
	int b = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;

}

//n��̨��һ����1��2�ף��ж���������
//��쳲����������ƣ�F(1)=1��F��2��=f(1)+1=2:����һ��f(1)����һ�׻�ֱ�������ס�
//F(3)=f(1)+f(2)=3�ȵ�f(1)����һ�׻��ȵ�f(2)�������ס�f��4��=f(3)+f(2)
//1 2 3 5 8 ����
int Fib3(int n)
{
	if (n > 2)//��������
	{
		return Fib3(n - 1) + Fib3(n - 2);
	}
	else if (n==2)//2��̨��
	{
		return 2;
	}
	else
		return 1;
}