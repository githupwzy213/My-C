#include<stdio.h>
#define N_VALUES 5

int main()
{
	////ָ��Ƚϴ�С
	//float values[N_VALUES]={1.0};
	//float* vp = NULL;
	//for (vp = &values[0]; vp < &values[N_VALUES];vp++)

	//{
	//	*vp = 0.0;
	//	printf("%f ", *vp);
	//}
	////for(vp=&values[N_VALUES];vp>=&valuse[0];vp--)
	////Ҫ��������������ʽ
	////��׼�涨������ָ�������ָ�������һ��Ԫ�غ�����Ǹ�ָ��Ƚϵ���������
	////��һ��Ԫ��ǰ���Ǹ�ָ��Ƚ�


	//ָ�����Ͳ�ͬ�����ʿռ䲻ͬ
	//int a = 0;
	//int* pa = &a;
	//char* p = &a;

	////int��ָ��
	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);

	////char����ָ��
	//printf("%p\n", p);
	//printf("%p\n", p + 1);
	/*��������
	00000033479EF754
	00000033479EF758
	00000033479EF754
	00000033479EF755*/

	//int arr[10] = { 0 };
	//int* p1 = arr;//����������Ԫ�ص�ַ
	////ָ�����Ͳ�������char���ͣ�
	////��������ʱ�������飬ÿ��Ԫ��ռ�ڴ�4���ֽ�
	////��charָ��ÿ��ֻ����һ���ֽ�
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p1 + i) = 0;//����������Ԫ�ظ�Ϊ0
	//	printf("%d ", arr[i]);
	//}
	
	//ָ��+-����
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *p);
	//	p = p + 1;//����pÿ�ζ�������4���ֽ�
	//}//��ӡ����ÿһ��Ԫ��
	//printf("\n");
	//printf("%d\n", &arr[9] - &arr[0]);//����9.ָ��-ָ����м�Ԫ�ظ���
	//printf("%d", &arr[0] - &arr[9]);//����ָ�����ָ��ͬһ��ռ�
	//

	//����ָ��
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//ppa�Ƕ���ָ��
	printf("%d\n", **ppa);
	//��ӡ10
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);
	//��ӡ20

}