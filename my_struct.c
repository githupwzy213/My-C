#include<stdio.h>
#include<stddef.h>
//�ṹ���ڴ����
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
	//�����ṹ������Ķ����б��Ų���ͬ���½ṹ���С��ͬ

	//����Ĭ�϶�����
	//������Ϊ1ʱ#pragma pack(1)
	//����6 6 13 22
	
	//����ṹ���Ա����ڽṹ����ʼ��ַƫ����
	//size_t offsetof(structName,memberName);�������ṹ��������Ա����<stddef.h>
	printf("%d",offsetof(struct S1,a));//4
	return 0;
}