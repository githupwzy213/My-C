#include<stdio.h>

//int main()
//{
//	//unsigned long pulArray[] = { 6,7,8,9,10 };
//	//unsigned long* pulPtr;
//	//pulPtr = pulArray;
//	//*(pulPtr + 3) += 3;//������ĸ�Ԫ��ֵ+3��12
//	//printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//��ӡ��Ԫ�غ͵��ĸ�Ԫ�ء���ӡ6��12
//	return 0;
//}


//дһ�����������ַ�������
//#include<string.h>
//#include<assert.h>
//void reverse(char*str)
//{
//	assert(str);//���ж��ԣ���strΪNULLʱ�ſ���ʹ��str��
//	char* left = str;
//	int len = strlen(str);
//	char* right = str + len - 1;//��strlen�Ͳ�����ǰ���sz�ˡ�
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	/*int sz = sizeof(arr) / sizeof(arr[0]);*/
//	/*reverse(arr, sz);*/
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//��S=a+aa+aaa+aaaa+����ǰn��֮�͡�����S=2+22+222+2222+22222
//a=0*10+a,aa=a*10+1,aaa=aa*10+a
//int main()
//{
//	int S = 0;
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		S += ret;
//	}
//	printf("%d\n", S);
//	return 0;
//}


//��ӡˮ�ɻ���(������������0-100000����ˮ�ɻ��������.0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084
//ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮�����õ��ڱ�����153=1^3+5^3+3^3
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		//1.������i��λ��n
//		int n = 1;
//		int temp = i;//�����м����temp��ֹi��;�ı�Ӱ��forѭ��
//		while (temp /=10)
//		{
//			n++;
//		}
//		
//		//2.��λ����n�η�֮��sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);//����η�������math.h
//			temp /= 10;
//		}
//		//3.i==sum��������ӡ
//		if (i == sum)
//			printf("%d ", i);
//	}
//
//return 0;
//}


//��ӡ���Σ���C��������Ļ���������ͼ��
int main()
{
	//�������ض������������Զ������������֡��ϲ�������=�²���-1
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//1.�ϰ벿��
	for (i = 0; i < line; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j <line-i-1; j++)//�����Χ���ص㣬���Ծ������ơ�
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//2.�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		//��ӡ�ո�
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}