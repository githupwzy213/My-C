#include<stdio.h>
//数组参数

//一维数组传参

//void test(int arr[])//参数正确
//void test(int arr[10])//参数也正确，10写错了也没问题
//void test(int *arr)//参数也正确（用整型指针接受地址）

//void test2(int *arr[20])//参数正确20可以省略
//void test2(int **arr) //参数也正确

//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };//数组每个元素是int*。数组名是个地址（一级指针的地址）
//	test(arr);//数组名是首元素地址
//	test2(arr2);
//	return 0;
//}

//二维数组传参
//void test(int arr[3][5])//数组传参，参数可以用数组（行参数可以省略，列参数不可以省略，也不可以同时省略）
//void test(int *arr)//参数错误（二维数组数组名（首元素地址）是第一行的地址（一维数组的地址））
//void test(int *arr[5])//参数错误

//void test(int (*arr)[5])//参数正确（数组指针）

//void test(int **arr)//参数错误（二级指针是存放一级指针变量的地址的）
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//
//
//}
//

//指针传参

//一级指针传参
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p传给函数
//	print(p, sz);
//	return 0;
//}

//思考：当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
//比如
//void test(int *p)
//int main()
//{
//	//当void参数是一级指针，test（）能调用什么参数？可以传变量地址或一级指针
//	int a = 0;
//	//可以传&a
//	test(&a);
//	int* p1 = &a;
//	test(p1);//可以传p1
//	return 0;
//}

//二级指针传参
//void test(int** ptr)//参数是二级指针
//{
//
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(&p);//可以是一级指针的地址
//	test(pp);//可以是二级指针
//
//	//思考：还有其它形式
//	int* arr[];//指针数组也可以。
//	test(arr);//可以传数组名arr：是首元素地址（而首元素是个地址）
//
//}

//函数指针：指向函数的指针(存放函数地址的指针）

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

int main()
{

	int a = 10;
	int b = 20;
	/*Add(a, b);*/
	//printf("%p\n", &Add);//打印一个地址（函数地址）
	//printf("%p", Add);//打印结果和上面相同都是函数地址（不存在函数首元素地址）
	//&Add==Add都是函数的地址。

	//存放函数地址
	int(*pa)(int,int) = Add;//（int,int ）可以写成（int x,int y）.是函数参数类型，int是函数返回类型。
	printf("%d\n", (*pa)(2, 3));//(*pa)(2, 3)找到函数并调用打印5

	//讨论这里(*pa)(2, 3)中的*的意义
	//函数指针中的*没有什么价值，可以省略
	printf("%d\n", (**pa)(2, 3));//不建议用这两种
	printf("%d\n", (***pa)(2, 3));//多余的*是摆设，都同样会打印5

	printf("%d\n", (pa)(2, 3));//所以可以把*省略
	printf("%d\n", pa(2, 3));//这种写法也是可以的
	//printf("%d\n", *pa(2, 3));这种写法是错误的
	

	return 0;
}

//void print(char* ch)
//{
//	printf("%s", ch);
//}
//int main()
//{
//	void (*p)(char*) = print;//创建函数指针存储函数地址
//	(*p)("hello");//调用函数打印hello
//
//	return 0;
//}