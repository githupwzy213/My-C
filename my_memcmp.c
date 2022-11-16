#include<stdio.h>
#include<string.h>
////memcmp:内存比较
////int memcmp(const void* ptr1, const void* ptr2, size_t num);
////比ptr1和ptr2开始的num个字节内容
////1.当num个字节全部相等时返回0
////2.首次出现1个字节内容不相等*(ptr1+i)>*(ptr2+i)返回>0
////3.首次出现1个字节内容 * (ptr1 + i) < *(ptr2 + i)返回<0
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int arr3[] = { 1,2,3,4,0 };
//	char str1[] = "abcd";
//	char str2[] = "acbd";
//	int ret = memcmp(arr1, arr2,20);//返回-1
//	ret = memcmp(arr1, arr3, 20);//返回1
//	ret = memcmp(str1, str2, 4);//返回-1
//	printf("%d", ret);
//	return 0;
//}

//memset内存设置void * memset ( void * ptr, int value, size_t num );
//value要设置的字符，num：设置多少字节

int main()
{
	char arr1[] = "#########";
	memset(arr1, '*', 3);//将数组前三个字符设置为*.arr1[]="***######"
	int arr2[5] = { 0 };
	memset(arr2, 1, 10);//将内存前10字节内容设置为1:16进制01010101 01010101 01010000 00000000 00000000 
	//16843009 16843009 257 0
	

	return 0;
}

