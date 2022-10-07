#include<stdio.h>
#define N_VALUES 5

int main()
{
	////指针比较大小
	//float values[N_VALUES]={1.0};
	//float* vp = NULL;
	//for (vp = &values[0]; vp < &values[N_VALUES];vp++)

	//{
	//	*vp = 0.0;
	//	printf("%f ", *vp);
	//}
	////for(vp=&values[N_VALUES];vp>=&valuse[0];vp--)
	////要尽量避免这种形式
	////标准规定：允许指向数组的指针与最后一个元素后面的那个指针比较但不允许与
	////第一个元素前面那个指针比较


	//指针类型不同，访问空间不同
	//int a = 0;
	//int* pa = &a;
	//char* p = &a;

	////int型指针
	//printf("%p\n", pa);
	//printf("%p\n", pa + 1);

	////char类型指针
	//printf("%p\n", p);
	//printf("%p\n", p + 1);
	/*输出结果是
	00000033479EF754
	00000033479EF758
	00000033479EF754
	00000033479EF755*/

	//int arr[10] = { 0 };
	//int* p1 = arr;//数组名是首元素地址
	////指针类型不可以用char类型，
	////由于数组时整型数组，每个元素占内存4个字节
	////而char指针每次只访问一个字节
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p1 + i) = 0;//将数组所有元素改为0
	//	printf("%d ", arr[i]);
	//}
	
	//指针+-整数
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//int* p = arr;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *p);
	//	p = p + 1;//这里p每次都会增加4个字节
	//}//打印数组每一个元素
	//printf("\n");
	//printf("%d\n", &arr[9] - &arr[0]);//返回9.指针-指针得中间元素个数
	//printf("%d", &arr[0] - &arr[9]);//两个指针必须指向同一块空间
	//

	//二级指针
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//ppa是二级指针
	printf("%d\n", **ppa);
	//打印10
	**ppa = 20;
	printf("%d\n", **ppa);
	printf("%d\n", a);
	//打印20

}