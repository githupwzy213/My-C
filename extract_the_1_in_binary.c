#include<stdio.h>
//求一个整数二进制形式1的个数
int main()
{
	int count = 0;
	int num = 0;
	printf("请输入数字：");
	scanf("%d", &num);

	//num%2==1则num二进制形式最后一位是1。
	//num/2相当于将num二进制形式右移一位
	//正数原反补相同。这个语句块只适用正数。
	//num=-1时返回0（-1的反码是32位1）
	/*while (num)
	{
		if (num % 2 == 1)
		{
			count++;
		}
		num = num / 2;
	}*/

	//优化：利用按位与&操作符和逻辑右移>>操作符
	//当num&1==1时num二进制新式最后一位是1
	int i = 0;
	for (i = 0; i < 32; i++)//右移31次将所有的数据位移到末尾
	{
		if ((num >>i) & 1 == 1)
			count++;
	}
	printf("%d\n",count);
}