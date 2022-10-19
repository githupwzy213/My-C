#include<string.h>
#include<stdlib.h>
struct stu
{
	char name[10];
	int age;
};
//int comper_int(const void*e1, const void*e2)
//{
//	//比较两整形
//	return *(int*)e1 - *(int*)e2;
//}
int comper_stu_by_age(const void* e1, const void* e2)
{//结构体年龄比较
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
int comper_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
void Swap(char* buf1, char* buf2,int width)
{//将width也传过来，char*一次只访问一个字节所以用width将元素所有字符都都交换
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}

}
//模仿快速排序
//参数：要排序的数组起始位置/数组元素个数/每个元素大小（结构体是宽度）/比较函数的指针
//实现bubble_sort的程序员不知道元素类型int (*comper)(void*,void*)
void bubble_sort(void* base,int sz, int width,int (*comper)(const void* e1, const void* e2))
{//趟数	
	int i = 0;
	for(i=0;i<sz-1;i++)
	{//每一趟比较对数,
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{//两元素的比较
			//不同类型数据比较方法不同，调用要用的比较函数comper
			//相邻两个元素(char*)base+j*width,(char*)base(j+1)*weidth（指针每次移动weidth个字节）
			if (comper((char*)base + j * width, (char*)base+(j + 1) * width) > 0)//升序
			{//这时e1和e2就指向两个相邻的两个元素了
				//交换
				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
				//要把宽度也传过去，用来将元素所有字符都交换
			}
		}
	}

}

void test1()
{
	//冒泡排序结构体类型数据
	struct stu s[] = { {"张三",20},{"王五",40},{"李强",30} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), comper_stu_by_age);//用结构体类型中的age排序
	//用结构体类型中的name排序
	bubble_sort(s, sz, sizeof(s[0]), comper_stu_by_name);
}
//void test2()
//{
//	int arr[] = { 10,9,8,7,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员知道要排序的是什么数据
//	//就应该知道如何比较数组中要排序的两元素
//	bubble_sort(arr,sz,sizeof(arr[0]),comper_int);
//}
int main()
{
	test1();
	//test2();
	return 0;
}