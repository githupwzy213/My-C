#include<stdio.h>


//�ṹ��
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	//����ṹ���Աa������
//	struct S a, * p = &a;//�����˽ṹ�����a�ͽṹ��ָ��p(pָ��a�ĵ�ַ��
//	a.a = 99;
//	printf("%d\n", p->a);//printf����������a.a/p->a/(*p).a
//	//������������*p.a:.�����ȼ���*��
//	return 0;
//}


//�ж�����ṹ��������
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//
//};
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);//students�ǽṹ��������Ԫ�ص�ַ��+1��ָ������ڶ���Ԫ�ص�ַ
//	return 0;
//}//���wang

//����ˮ���⣺1ƿ��ˮ1Ԫ��2����ƿ��һƿ��ˮ����20Ԫ���Ժȶ�����ˮ
//int main()
//{
//	//��ˮ��ʼ��=Ǯ��
//	int n = 20;
//	//��ʼƿ�Ӹ���=Ǯ��
//	int i = 20;
//	while (i>=2)
//	{
//		/*i -= 2;
//		n++;
//		i += 1;*/
//		n += i / 2;
//		i = i % 2+i/2;
//		
//	}
//	printf("%d,%d\n", n, i);//���ʣһ��ƿ�ӡ��ܹ���39ƿ��ˮ��20(Ԫ)ƿ��ģ�19ƿ���ģ�
// ��ˮ��=Ǯ��*2-1��ʣ1��ƿ��
//	return 0;
//}

//����
//strlen/strcpy
//������ż��˳�������������飬ʹ�����е�����λ��ǰ�벿�֣�ż��λ�ں�벿��

//void move1(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		if (arr[left] % 2 == 0)//��ǰ������ż�����ҵ������ηŵ����棨��һ��ż�������ָ��Ҫ�ƶ�һ�Σ�
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			right--;
//		}
//		else
//			left++;
//	}
//}//1 9 3 7 5 6 8 4 10 2.����ʼ����ȫ������ʱ���䣬ȫ��ż��ʱ��ı��ʼ˳��2��4,6->4 6 2
//void move2(int arr[],int sz)
//{//����ͬʱ�ң��ҵ�������ż���󽻻��±�
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�����ż�����ҵ�ż��ʱ����while
//		while ((left < right)&&(arr[left] % 2 == 1))//����Լ��left < right��ֹ��ȫ����ʱleft>right��
//		{
//			left++;
//		}
//		//�ұ����������ҵ���������while
//		while ((left < right) && (arr[right] % 2 == 0))//����Լ��left < right��ֹ��ȫż��ʱleft>right��
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//
//}//1 9 3 7 5 6 4 8 2 10,ȫ������ȫż��˳�򲻱�
//int main()
//{
//	int i = 0;
//	int arr[] = {2,4,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//move1(arr, sz);//�ƶ�Ԫ��
//	move2(arr, sz);
//	//��ӡ����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}