#include<stdio.h>

//int main()
//{
//
//	//����1
//	(*(void(*)())0)();//void(*)()�Ǻ���ָ�루�������޲η���������void��,
//	//(void(*)())0��0ǿ������ת��Ϊ����ָ�����ͣ���ô0���Ǻ�����ַ��
//	//(*(void(*)())0)()����0��ַ���ĺ����������޲η���������void)
//	
//	//����2
//	void(*signal(int, void(*)(int)))(int);//signal()�Ǹ�����������������int�ͺ���ָ��void(*)(int)
// ���ú���ָ��ָ��ĺ�����void������int����������void��
//	//signal�ķ��������Ǻ���ָ�루�������ָ��ָ��ĺ����Ĳ�����int����������void)
//	
//	//������벻����д��void(*)(int) signal(int,void(*)(int)).
//	//����д����void�е�*û����signal�����Ϊ*��Ҫ�����ֽ��
//
//	//����2����
//	//��typedef�������ͣ��磺typedef unsigned int uint��unsigned������Ϊuint
//	//������ָ������void(*)(int)����Ϊpfun_t,������д�� typedef void(*)(int) pfun_t
//	
//	//��ȷ���巽���ǣ�typedef void(*pfun_t)(int)
//	//����2�͵ȼ��������������
//	typedef void(*pfun_t)(int);
//	pfun_t signal(int, pfun_t);
//
//	return 0;
//}

//����ָ������:��ź�����ַ

int Add(int x, int y)
{
	return x+y;//�ӷ�
}
int Sub(int x, int y)
{
	return x - y;//����
}
int Mul(int x, int y)
{
	return x * y;//�˷�
}
int Div(int x, int y)
{
	return x / y;//����
}

int main()
{
	//ָ������
	int* arr[5];
	int(*pa)(int, int) = Add;//�ú���ָ��pa��ź���Add��Sub/Mul/Div���ĵ�ַ
	//����һ��������4��������ַ-����ָ������
	int (*parr[4])(int, int)={Add,Sub,Mul,Div};
	//parr����������int (*)(int, int)������ָ�룩������Ԫ������

	//���������ڵĺ���
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", parr[i](2, 3));//������*����ʡ��
		//���δ�ӡ(2+3=5,2-3=-1,2*3=6,2/3=0.)5 -1 6 0
	}
}

//����ָ��д��1.
//int (*arr[])();//��ȷ�﷨
//int* parr2[10]();//�������䶼�Ǵ����﷨������
//int (*)()parr3[10];

//����ָ��������ϰ
char* my_strcpy(char* dest, const char* src);
//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ������pfArr,�ܹ����4��my_strcpy�����ĵ�ַ