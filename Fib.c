#include"Fib.h"

int main()
{
	//���n��쳲�������
	int n = 0;
	printf("������n:");
	scanf("%d", &n);
	int i = 0;
	for (i = 1; i <= n; i++)//����forѭ����ӡ1-n������쳲�������
	{
		/*int ret = Fib1(i);*/
		/*int ret = Fib2(i);*/
		int ret = Fib3(i);//1-n��̨�׵���������
		printf("%d ", ret);
	}
	
	//n��̨��һ����1��2�ף��ж���������


}