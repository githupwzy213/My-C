#include<stdio.h>
//���ȼ�
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//a=6,c=6
	b = ++c,c++,++a,a++;//c=8,a=8,b=7
	b += a++ + c;//+�����ȼ�>+=,a=9,c=8,b+=16,b=16+7=23
	printf("a=%d b=%d c=%d\n", a, b, c);
	//��ӡa=9 b=23 c=8
	return 0;
}