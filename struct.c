#include<stdio.h>
//结构体创建
struct stu
{
	char name[20];
	int age;
	char id[20];
};//注意此处的分号

//创建对象并初始化
int main()
{
	//创建学生对象并初始化
	struct stu s1 = { "张三",20,"20230234" };
	//访问学生s1
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
	//结构体变量：成员名s1
	//s1有地址
	struct stu* ps = &s1;
	//结构体指针操作符->
	printf("%s\n", ps->name);
	printf("%s\n", (*ps).name);



}