#include<stdio.h>

//�ݹ����n��k�η�
//double pow(int n, int k)
//{//�ݹ�ʵ��n��k�η�
////��k�Ǹ���ʱ���⴦��
//	if (k < 0)
//	{
//		return (1.0 / pow(n, -k));
//	}
//	else if (k == 0)
//		return 1;
//	else
//		return n *pow(n, k-1);
//
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("������n��k\n");
//	scanf("%d%d", &n, &k);
//	double ret = pow(n, k);
//	printf("n��k�η����ڣ�%f",ret); //% f��ӡ��������С��
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return  0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i < 12; i++)
	{
		printf("hehe ");
		arr[i] = 0;//������ѭ����arr[12]��i�ĵ�ַ��ͬ�����Ե�arr[12]=0ʱi=0,������ѭ����
	}
	return 0;
}