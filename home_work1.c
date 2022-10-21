#include<stdio.h>


//结构体
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	//输出结构体成员a的数据
//	struct S a, * p = &a;//定义了结构体变量a和结构体指针p(p指向a的地址）
//	a.a = 99;
//	printf("%d\n", p->a);//printf参数可以是a.a/p->a/(*p).a
//	//参数不可以是*p.a:.的优先级比*高
//	return 0;
//}


//判断下面结构体输出结果
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
//	fun(students + 1);//students是结构体数组首元素地址。+1后指向数组第二个元素地址
//	return 0;
//}//输出wang

//喝汽水问题：1瓶汽水1元，2个空瓶换一瓶汽水，给20元可以喝多少汽水
//int main()
//{
//	//汽水起始数=钱数
//	int n = 20;
//	//起始瓶子个数=钱数
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
//	printf("%d,%d\n", n, i);//最后剩一个瓶子。总共喝39瓶汽水（20(元)瓶买的，19瓶换的）
// 汽水数=钱数*2-1，剩1个瓶子
//	return 0;
//}

//调试
//strlen/strcpy
//调整奇偶数顺序：输入整数数组，使数组中的奇数位于前半部分，偶数位于后半部分

//void move1(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		if (arr[left] % 2 == 0)//从前往后找偶数，找到了依次放到后面（放一个偶数后面的指针要移动一次）
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			right--;
//		}
//		else
//			left++;
//	}
//}//1 9 3 7 5 6 8 4 10 2.当初始数组全是奇数时不变，全是偶数时会改变初始顺序2，4,6->4 6 2
//void move2(int arr[],int sz)
//{//左右同时找，找到奇数和偶数后交换下标
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//左边找偶数。找到偶数时跳出while
//		while ((left < right)&&(arr[left] % 2 == 1))//增加约束left < right防止（全奇数时left>right）
//		{
//			left++;
//		}
//		//右边找奇数。找到奇数跳出while
//		while ((left < right) && (arr[right] % 2 == 0))//增加约束left < right防止（全偶数时left>right）
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
//}//1 9 3 7 5 6 4 8 2 10,全奇数或全偶数顺序不变
//int main()
//{
//	int i = 0;
//	int arr[] = {2,4,6,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//move1(arr, sz);//移动元素
//	move2(arr, sz);
//	//打印数组
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}