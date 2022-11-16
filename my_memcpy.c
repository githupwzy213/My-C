#include<stdio.h>
#include<string.h>
#include<assert.h>
//void * memcpy ( void * destination, const void * source, size_t num );
//size_t num��λ�ֽڣ�Ҫ�������ݵĴ�С

//�����ṹ��
struct Student
{
	char name[10];
	int age;
};
//ʵ��my_memcpy
void* my_memcpy(void* dest, void* src, size_t num)//���������������ͣ��ṹ�壬���顣
{
	void* ret = dest;//���ڷ���Ŀ��������ʼ��ַ
	assert(dest && src);//���ԣ�dest,src��ΪNULL
	//����ֽ�ȡ����ȡnum��
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//�����ã�char*)dest++,++���ȼ�����ǿ������ת��
		++(char*)src;
	}
	return ret;
}
void* my_memmove(void* dest, void* src, size_t num)
{
	/*�ƶ��������
		Դλ��4,5,6,7,8src=&arr1[5]
		1.dest<srcĿ��λ��1,2,3,4,5:��ǰ�����ƶ������ƶ�4��1���ƶ�5��2λ�á���
		2.dest>srcĿ��λ��6,7,8,9,10�Ӻ���ǰ�ƶ����Ƚ�8�ŵ�10��Ȼ��7�ŵ�9λ�á���*/
	void* ret = dest;//���ڷ���Ŀ��������ʼ��ַ
	assert(dest && src);//���ԣ�dest,src��ΪNULL
	if(dest>src)//�Ӻ���ǰ�ƶ�
	{ 
		while (num--)//����num�����ж���--���ƶ�20���ֽ�������num--,����--num��ѭ��ִֻ��19�Σ�����19���ֽ�����
		{//��һ�ν���ѭ����num=19,���һ�ν���ѭ��num=0
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;//�����ã�char*)dest++,++���ȼ�����ǿ������ת��
			++(char*)src;
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	/*int arr2[10] = { 0 };*/
	//memcpy(arr2, arr1, 20);//��arr1 20���ֽ����ݿ�����arr2
	
	//struct Student s1 = { "����",10 };
	//struct Student s2 = { 0 };
	///*memcpy(&s2, &s1, sizeof(s1));*/
	//my_memcpy(&s2, &s1, sizeof(s1));
	//printf("%s%d", s2.name, s2.age);//s2={"����",10}

	//��ԴĿ�Ŀռ���ڽ�������ʱ����������my_memcpy
	//��1,2,3,4,5�ŵ�ԭ����3,4,5,6,7��λ�ã�����������arr1[]={1,2,1,2,3,4,5,8,9,10}
	//my_memcpy(arr1 + 2, arr1, 20);//���н��12121218910
	//1,2,3,4,5,6,7,8,9,10��1,2�ŵ�3��4λ���Ϻ��ټ���ȡ3,4λ���ϵ�����ȡ����1,2
	//memcpy(arr1 + 2, arr1, 20);//12123458910�⺯�����Դ����ڴ��ص����
//	C���Ա�׼�涨memcpyֻ�����ص��ڴ�Ϳ����˵��ǵ�ǰ���������Դ����ص����

	// �ڴ��ص�����ÿ⺯��memmove�ڴ��ƶ�
	//void * memmove ( void * destination, const void * source, size_t num );
	//memmove(arr1 + 2, arr1, 20);//12123458910
	//lmy_memmove(arr1 + 4, arr1+3, 20);//��4,5,6,7,8�ŵ�5,6,7,8,9λ��12344567810
	my_memmove(arr1, arr1 + 3, 20);//��4,5,6,7,8�ŵ�12345λ��4,5,6,7,8��6,7,8,9��10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}

	return 0;
}