#include<stdio.h>

//int main()
//{
//	//unsigned long pulArray[] = { 6,7,8,9,10 };
//	//unsigned long* pulPtr;
//	//pulPtr = pulArray;
//	//*(pulPtr + 3) += 3;//数组第四个元素值+3得12
//	//printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//打印首元素和第四个元素。打印6，12
//	return 0;
//}


//写一个函数逆序字符窜内容
//#include<string.h>
//#include<assert.h>
//void reverse(char*str)
//{
//	assert(str);//进行断言，当str为NULL时才可以使用str。
//	char* left = str;
//	int len = strlen(str);
//	char* right = str + len - 1;//用strlen就不用提前算好sz了。
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


//求S=a+aa+aaa+aaaa+……前n项之和。例如S=2+22+222+2222+22222
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


//打印水仙花数(自幂数）：求0-100000所有水仙花数并输出.0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084
//水仙花数是指一个n位数，其各位数字的n次方之和正好等于本身：如153=1^3+5^3+3^3
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		//1.求数字i的位数n
//		int n = 1;
//		int temp = i;//利用中间变量temp防止i中途改变影响for循环
//		while (temp /=10)
//		{
//			n++;
//		}
//		
//		//2.个位数的n次方之和sum
//		temp = i;
//		while (temp)
//		{
//			sum += pow(temp % 10, n);//计算次方，引用math.h
//			temp /= 10;
//		}
//		//3.i==sum若相等则打印
//		if (i == sum)
//			printf("%d ", i);
//	}
//
//return 0;
//}


//打印菱形：用C语言在屏幕上输出菱形图案
int main()
{
	//总行数必定是奇数，所以定义上下两部分。上部分行数=下部分-1
	int line = 0;
	scanf("%d", &line);
	int i = 0;
	//1.上半部分
	for (i = 0; i < line; i++)
	{
		int j = 0;
		//打印空格
		for (j = 0; j <line-i-1; j++)//这个范围是重点，可以举例类推。
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//2.下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		//打印空格
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2*(line-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}