#include<stdio.h>
//���������1�ĸ���
//���ð�λ��&
//n&(n-1)����ȥһ��1
//����������
//int main()
//{
//	int num = 0;
//	int count = 0;
//	printf("������ֵ��");
//	scanf("%d", &num);
//	while (num)
//	{
//		num= num & (num - 1);
//		count++;
//	}
//	printf("num��������1�ĸ����ǣ�%d",count);
//
//	return 0;
//}

//�������������Ʋ�ͬλ����
//�����ø���
//int get_differ_bit(int m,int n)
//{
//	int count = 0;
//	while (m)
//	{
//		if ((m&1)!=(n&1))
//			count++;
//		m >>= 1;//������������λ�������Ƿ���λ�����Բ����ø���
//		n >>= 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int sum=get_differ_bit(m, n);
//	printf("m��n��ͬλ�����ǣ�%d", sum);
//}
////�Ż�������������ʱ����temp=m^n;�ټ���temp������1�ĸ���

//��ӡ�������е�����λ��ż��λ
void print(int x)
{
	int j = 0;
	int i = 0;
	printf("����λ�ӵ͵��ߵ������ǣ�");
	for (i = 0; i <= 30; i += 2)
	{
		printf("%d ",(x>>i)&1);//������λ��x>>i&1��1������Ƶĵ�i+1λ��
	}
	printf("ż��λ�ӵ͵��ߵ������ǣ�");
	for (j = 1; j <= 31; j += 2)
	{
		printf("%d ", (x >> j) & 1);//ż��λ��x>>j&1��1������Ƶĵ�j+1λ����
	}
}
int main()
{
	int x = 0;
	printf("��������x:");
	scanf("%d", &x);
	print(x);
}
