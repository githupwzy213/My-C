#include<stdio.h>
#include<stddef.h>
//结构体内存对齐
struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
struct S3
{
	double d;
	char c;
	int a;
};
struct S4
{
	char c1;
	struct S3 s3;//
	double d;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	struct S3 s3 = { 0 };
	struct S4 s4 = { 0 };
	//printf("%d %d %d %d", sizeof(s1), sizeof(s2),sizeof(s3),sizeof(s4));//12 8 16 32
	//两个结构体变量的对象列表排布不同则导致结构体大小不同

	//设置默认对齐数
	//当设置为1时#pragma pack(1)
	//返回6 6 13 22
	
	//计算结构体成员相对于结构体起始地址偏移量
	//size_t offsetof(structName,memberName);参数：结构体名，成员名。<stddef.h>
	printf("%d",offsetof(struct S1,a));//4
	return 0;
}