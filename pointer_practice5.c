#include<stdio.h>
#include<stdlib.h>
//ָ����ָ�������ָ��

//int Add(int x, inty)
//{
//}
//int main()
//{
//	//����ָ��
//	int (*pf)(int, int);
//	//����ָ������
//	int (*pArr[4])(int, int);//pfarr�Ǻ���ָ������
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//ȡ������ָ������ĵ�ַ-ָ����ָ�������ָ��
//	//ppfArr�Ǹ�����ָ�룬ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ�ص������Ǻ���ָ�����͡�
//
//
//	return 0;
//}

////�ص�������ͨ������ָ����õĺ���������Ѻ�����ָ����Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ
////�����Ǿ�˵���ǻص��������ص����������ɸú�����ʵ��֮����á��������ض����¼�����������ʱ�������һ�����õġ����ڶ�
////���¼�����������Ӧ��
//
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	//ͨ���������ã�������ֱ��ͨ��print����
//	p("bit");//���ﺯ��print�ĵ�ַ��Ϊ����������֮���ڴ˵��ñ���Ϊ�ص�������
//}
//
//int main()
//{
//	test(print);
//	return 0;
//	//��ӡtest hehe:bit
//}

//�ص���������
// 
//ð������
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//ȷ����������
//	for (i = 0; i < sz - 1; i++)
//	{//��sz-1��
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		//ÿһ�˶�ȷ��һ�����Ԫ��
//		{
//			if (arr[j] > arr[j + 1])//��������
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//
//			}
//		}
//
//
//	}
//
//}//�����Զ����ð������ֻ���������Σ��������򸡵��ͣ�
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	//��ӡarr
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int main()
//{
//	struct stu s[3] = { {"����",10},{"����",20},{"����",30} };//�ṹ������
//	//���������˰����������ʱ����ð������Ͳ����������ˡ�
//	float f[] = { 1.0,2.0,3.0,4.0 };//Ҳ�������򸡵���
//	
//
//	
//	return 0;
//}
//

////�⺯��qsort-��������������������quick sort��������

//�����Ƚ���Ԫ�صĺ���
//int compare_int(const void*e1, const void*e2)//������Ҫ�Ƚϵ�Ԫ�ص�ָ��
////void*����/�����ͣ����Խ����������ͱ�����ָ�루�Ϳ��ԱȽ��������͵������ˣ�
////Ҫ�����������͵�����ʱ�Ͳ��ø�ָ�������ˡ�
////void*pָ�벻�ܽ����ò�������֪�����ʼ����ֽڣ�ͬ������p++
//{
//	//e1��e2����ֱ�ӽ����ã�������ǿ������ת��
//	return *(int*)e1 - *(int*)e2;
//	//�����涨e1<e2����С�������/e1==e2����0/e1>e2���ش��������
//}



//int compare_float(const void* e1, const void* e2)//����������
//{
//	return *(float*)e1 - *(float*)e2;
//}
struct stu
{
	char name[10];
	int age;
};
int compare_stu_by_age(const void* e1, const void* e2)
{//��ָ��ǿ��ת���ṹ����struct stu
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int compare_stu_by_name(const void* e1, const void* e2)
{//�ַ���������><=Ҫ��strcmp
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
	//ͬ�����ش���С�ڻ����0

}
//void test1()//��������
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//	//void* baseҪ�����������ʼ��ַ��size_t num:����Ԫ�ظ�����size��ÿ��Ԫ�ش�С���ֽڣ���compar:�����Ƚ���Ԫ�صĺ���
//	qsort(arr, sz, sizeof(arr[0]), compare_int);//��ӡ���������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//
//void test2()//���򸡵���
//{
//	float arr[] = { 1.0,2.0,3.0,4.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_float);//��ӡ���������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//
//}

void test3()//����ṹ��������
{//�ýṹ�������һ���������ͽ��бȽ�
	
	struct stu s[] = { {"����",40},{"����",20},{"����",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), compare_stu_by_age);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_name);
	//������ɺ�����Ԫ��˳���Ϊ������/����/����

}
int main()
{
	test3();
	//test2();
	//test1();
	//��ӡarr
	
}