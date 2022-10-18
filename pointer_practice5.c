#include<stdio.h>
#include<stdlib.h>
//指向函数指针数组的指针

//int Add(int x, inty)
//{
//}
//int main()
//{
//	//函数指针
//	int (*pf)(int, int);
//	//函数指针数组
//	int (*pArr[4])(int, int);//pfarr是函数指针数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;//取出函数指针数组的地址-指向函数指针数组的指针
//	//ppfArr是个数组指针，指针指向的数组有4个元素，每个元素的类型是函数指针类型。
//
//
//	return 0;
//}

////回调函数：通过函数指针调用的函数。如果把函数的指针作为参数传递给另一个参数，当这个指针被用来调用其所指向的函数时
////，我们就说这是回调函数。回调函数不是由该函数的实现之间调用。而是在特定的事件或条件发生时由另外的一方调用的。用于对
////该事件或条件的响应。
//
//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	//通过参数调用，并不是直接通过print调用
//	p("bit");//这里函数print的地址作为参数穿过来之后，在此调用被称为回调函数。
//}
//
//int main()
//{
//	test(print);
//	return 0;
//	//打印test hehe:bit
//}

//回调函数案例
// 
//冒泡排序
//void BubbleSort(int arr[], int sz)
//{
//	int i = 0;
//	//确定排序趟数
//	for (i = 0; i < sz - 1; i++)
//	{//排sz-1躺
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		//每一趟都确定一个最大元素
//		{
//			if (arr[j] > arr[j + 1])//升序排序
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
//}//这里自定义的冒泡排序只能排序整形（不能排序浮点型）
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	//打印arr
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
//	struct stu s[3] = { {"张三",10},{"李四",20},{"王五",30} };//结构体数组
//	//将上述三人按年龄排序此时上述冒泡排序就不可以运用了。
//	float f[] = { 1.0,2.0,3.0,4.0 };//也不能排序浮点数
//	
//
//	
//	return 0;
//}
//

////库函数qsort-可以排序任意类型数据quick sort快速排序

//用来比较两元素的函数
//int compare_int(const void*e1, const void*e2)//参数是要比较的元素的指针
////void*（无/空类型）可以接收任意类型变量的指针（就可以比较任意类型的数组了）
////要排序其他类型的数组时就不用改指针类型了。
////void*p指针不能解引用操作（不知道访问几个字节）同样不能p++
//{
//	//e1和e2不能直接解引用，所以先强制类型转换
//	return *(int*)e1 - *(int*)e2;
//	//函数规定e1<e2返回小于零的数/e1==e2返回0/e1>e2返回大于零的数
//}



//int compare_float(const void* e1, const void* e2)//浮点数排序
//{
//	return *(float*)e1 - *(float*)e2;
//}
struct stu
{
	char name[10];
	int age;
};
int compare_stu_by_age(const void* e1, const void* e2)
{//将指针强制转换结构体型struct stu
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int compare_stu_by_name(const void* e1, const void* e2)
{//字符串不能用><=要用strcmp
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
	//同样返回大于小于或等于0

}
//void test1()//排序整形
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//qsort (void* base, size_t num, size_t size,int (*compar)(const void*, const void*));
//	//void* base要排序的数组起始地址，size_t num:数组元素个数，size：每个元素大小（字节），compar:用来比较两元素的函数
//	qsort(arr, sz, sizeof(arr[0]), compare_int);//打印结果是升序
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//
//void test2()//排序浮点型
//{
//	float arr[] = { 1.0,2.0,3.0,4.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_float);//打印结果是升序
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//
//}

void test3()//排序结构体型数据
{//用结构体的其中一个数据类型进行比较
	
	struct stu s[] = { {"张三",40},{"李四",20},{"王五",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	//qsort(s, sz, sizeof(s[0]), compare_stu_by_age);
	qsort(s, sz, sizeof(s[0]), compare_stu_by_name);
	//排序完成后数组元素顺序变为：李四/王五/张三

}
int main()
{
	test3();
	//test2();
	//test1();
	//打印arr
	
}