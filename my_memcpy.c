#include<stdio.h>
#include<string.h>
#include<assert.h>
//void * memcpy ( void * destination, const void * source, size_t num );
//size_t num单位字节，要拷贝内容的大小

//拷贝结构体
struct Student
{
	char name[10];
	int age;
};
//实现my_memcpy
void* my_memcpy(void* dest, void* src, size_t num)//拷贝各种数据类型，结构体，数组。
{
	void* ret = dest;//用于返回目的数组起始地址
	assert(dest && src);//断言，dest,src不为NULL
	//逐个字节取出，取num次
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;//不能用（char*)dest++,++优先级高于强制类型转换
		++(char*)src;
	}
	return ret;
}
void* my_memmove(void* dest, void* src, size_t num)
{
	/*移动情况分析
		源位置4,5,6,7,8src=&arr1[5]
		1.dest<src目的位置1,2,3,4,5:从前往后移动，先移动4到1再移动5到2位置……
		2.dest>src目的位置6,7,8,9,10从后往前移动，先将8放到10，然后将7放到9位置……*/
	void* ret = dest;//用于返回目的数组起始地址
	assert(dest && src);//断言，dest,src不为NULL
	if(dest>src)//从后往前移动
	{ 
		while (num--)//先用num进行判断再--。移动20个字节所以用num--,若用--num则循环只执行19次，拷贝19个字节内容
		{//第一次进入循环后num=19,最后一次进入循环num=0
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	else
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;//不能用（char*)dest++,++优先级高于强制类型转换
			++(char*)src;
		}
	}
	return ret;
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10};
	/*int arr2[10] = { 0 };*/
	//memcpy(arr2, arr1, 20);//将arr1 20个字节内容拷贝进arr2
	
	//struct Student s1 = { "张三",10 };
	//struct Student s2 = { 0 };
	///*memcpy(&s2, &s1, sizeof(s1));*/
	//my_memcpy(&s2, &s1, sizeof(s1));
	//printf("%s%d", s2.name, s2.age);//s2={"张三",10}

	//当源目的空间存在交集关联时，不可以用my_memcpy
	//将1,2,3,4,5放到原数据3,4,5,6,7的位置，运行理想结果arr1[]={1,2,1,2,3,4,5,8,9,10}
	//my_memcpy(arr1 + 2, arr1, 20);//运行结果12121218910
	//1,2,3,4,5,6,7,8,9,10当1,2放到3，4位置上后再继续取3,4位置上的数据取的是1,2
	//memcpy(arr1 + 2, arr1, 20);//12123458910库函数可以处理内存重叠情况
//	C语言标准规定memcpy只处理不重叠内存就可以了但是当前编译器可以处理重叠情况

	// 内存重叠情况用库函数memmove内存移动
	//void * memmove ( void * destination, const void * source, size_t num );
	//memmove(arr1 + 2, arr1, 20);//12123458910
	//lmy_memmove(arr1 + 4, arr1+3, 20);//将4,5,6,7,8放到5,6,7,8,9位置12344567810
	my_memmove(arr1, arr1 + 3, 20);//将4,5,6,7,8放到12345位置4,5,6,7,8，6,7,8,9，10
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr1[i]);
	}

	return 0;
}