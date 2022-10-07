#include<stdio.h>

//野指针。越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p++) = i;//指针越界访问
//		printf("%d ", arr[i]);
//	}
//	printf("%d", arr[0]);
//	
//}

////指针指向的空间释放
//int test()
//{
//	int a = 10;
//	return &a;
//}
////出函数后空间&a被释放
//int main()
//{
//	int* p = test();//当要使用这个空间时，这个空间已经被释放了
//	*p = 20;
//	printf("%d", *p);
//}
#include<stdio.h>
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	printf("%d", *p);
	return 0;
}//可以正常返回值但是代码是错误代码