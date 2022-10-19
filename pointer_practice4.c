#include<string.h>
#include<stdlib.h>
struct stu
{
	char name[10];
	int age;
};
//int comper_int(const void*e1, const void*e2)
//{
//	//�Ƚ�������
//	return *(int*)e1 - *(int*)e2;
//}
int comper_stu_by_age(const void* e1, const void* e2)
{//�ṹ������Ƚ�
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int comper_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void Swap(char* buf1, char* buf2,int width)
{//��widthҲ��������char*һ��ֻ����һ���ֽ�������width��Ԫ�������ַ���������
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}

}
//ģ�¿�������
//������Ҫ�����������ʼλ��/����Ԫ�ظ���/ÿ��Ԫ�ش�С���ṹ���ǿ�ȣ�/�ȽϺ�����ָ��
//ʵ��bubble_sort�ĳ���Ա��֪��Ԫ������int (*comper)(void*,void*)
void bubble_sort(void* base,int sz, int width,int (*comper)(const void* e1, const void* e2))
{//����	
	int i = 0;
	for(i=0;i<sz-1;i++)
	{//ÿһ�˱Ƚ϶���,
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{//��Ԫ�صıȽ�
			//��ͬ�������ݱȽϷ�����ͬ������Ҫ�õıȽϺ���comper
			//��������Ԫ��(char*)base+j*width,(char*)base(j+1)*weidth��ָ��ÿ���ƶ�weidth���ֽڣ�
			if (comper((char*)base + j * width, (char*)base+(j + 1) * width) > 0)//����
			{//��ʱe1��e2��ָ���������ڵ�����Ԫ����
				//����
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
				//Ҫ�ѿ��Ҳ����ȥ��������Ԫ�������ַ�������
			}
		}
	}

}

void test1()
{
	//ð������ṹ����������
	struct stu s[] = { {"����",20},{"����",40},{"��ǿ",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), comper_stu_by_age);//�ýṹ�������е�age����
	//�ýṹ�������е�name����
	bubble_sort(s, sz, sizeof(s[0]), comper_stu_by_name);
}
//void test2()
//{
//	int arr[] = { 10,9,8,7,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Ա֪��Ҫ�������ʲô����
//	//��Ӧ��֪����αȽ�������Ҫ�������Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),comper_int);
//}
int main()
{
	test1();
	//test2();
	return 0;
}