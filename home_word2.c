#include<stdio.h>
#include<string.h>
#include<assert.h>
//ʵ�ֺ��������������ַ����е�k���ַ�����ABCD���������ַ��õ�CDAB.ABCDEF-CDEFAB
//ǰ��������BACDEF��벿������BAFEDCȫ������CDEFAB
//void reverse(char arr[], int left, int right)
//{
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//������⣺������ÿ��Ԫ��ǰ��k���±꣬ǰk��Ԫ�����ηŵ�ĩβ
//void left_move(char*str, int k)
//{
//	//ָ�������֮ǰ�ж��Ƿ�ΪNULL
//	assert(str);//���strΪNULL�򱨴�
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{//ÿ��ѭ����һ��Ԫ�طŵ�ĩβ����Ԫ��ǰ��
//		int j = 0;
//		char temp = *str;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//
//		}
//		*(str + len - 1) = temp;
//
//	}
//
//}
//int main()
//{
//	char arr[] = "ABCDEFGHI";
//	int k = 4;
	////����1��������ת(���Է�װ��һ�������ڷŵ��������⣩
	//int len = strlen(arr);//'\0'���ܲ�����������ַ���Ԫ�ؽ��ᷢ���ı䡣
	////ǰk������
	//reverse(arr, 0, k - 1);
	////��sz-k������
	//reverse(arr, k, len - 1);
	////������������
	//reverse(arr, 0, len - 1);
	////����2��
	//left_move(arr, k);
	//printf("%s",arr);
	//return 0;
//}
//дһ���������ж�һ���ַ��Ƿ�Ϊ��һ���ַ�����ת֮����ַ��ܡ�
//������s1=AABCD��s2=BCDAA,����1.����s1=abcd��s2=ABCD����0
//AABCD����1���ַ���ABCDA.AABCD����������BCDAA.AABCD����һ����DAABC
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)//���û������ж���ABCDEF��ABҲ�ᱻ�жϳ�YES
		return 0;
	//1.��str1�ַ�����׷��һ��str1�ַ���
	// string.h��strcat(arr1,arr2)(string catenate�ַ�������)���ַ���arr2׷�ӵ�arr1���С�
	// char * strcat ( char * destination, const char * source );
	// arr1[]="ab",arr2[]="cd",��arr2�е�ÿ��Ԫ�����ηŵ�arr1�е�'\0'λ�ã�֪����arr2�е�'\0'����arr1�н���
	// strcat������׷�ӱ�����strcat��arr1��arr1����arr1�е�a,b���ηŵ�'\0'λ�ã���Ҫ��'\0'ʱ��'\0'�Ѿ���aռ���ˣ�������һֱ��ѭ����
	// strnct:char * strncat ( char * destination, const char * source, size_t num );size_t numҪ׷�ӵ��ַ���������׷�ӱ���
	strncat(str1, str2, len1);
	//2.�ж�str2ָ����ַ����Ƿ�Ϊstr1ָ����ַ��ܵ��Ӵ�
	//strstr(str1,str2);�ж�str1�Ƿ����Ӵ�str2(�ҵ��˷����Ӵܵĵ�ַ���Ҳ������ؿ�ָ��)
	char*ret= strstr(str1, str2);
	if (ret == NULL)//NULL��stdio.h��
		return 0;
	else
		return 1;

}
int main()
{
	char arr1[30] = "ABCDEF";//�����Ż�����Ҫ׷��Ԫ������Ҫ��ʼ��һ���ϴ�ռ�
	char arr2[] = "DEFA";
	int len = strlen(arr1);
	//����1��
	//��arr1������ת��Ľ����arr2�Ƚ������ͬ�򷵻�1
	//ABCDEF,BCDEFA,CDEFAB,DEFABC,EFABCD,FABCDE
	//int i = 0;
	//for (i = 0; i < len - 1; i++)
	//{
	//	reverse(arr1, 0, i - 1);
	//	reverse(arr1, i, len - 1);
	//	reverse(arr1, 0, len - 1);
	//	if (strcmp(arr1, arr2) == 0)//��������ͬ��������ָ�����ͣ�
	//	{
	//		printf("YES\n");
	//		break;
	//	}
	//}
	//if (i >= len - 1)
	//	printf("NO\n");

    //�Ż���arr3[]="ABCDEFABCDEF"��arr1������ת���ܶ���arr3���Ӵ�
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}

////�жϴ������н��
	//int a[5] = { 5,4,3,2,1 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));//��ӡ4,1

	//ģ��ʹ��qsort

	//int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	//int* ptr1 = (int*)(&aa + 1);//ptr1��int*)ָ���������һ��Ԫ�غ���ĵ�ַ
	//int* ptr2 = (int*)(*(aa + 1));//ptr2(int*)ָ��5�ĵ�ַ
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//��ӡ1,6