#include<stdio.h>
//�ṹ�崴��
struct stu
{
	char name[20];
	int age;
	char id[20];
};//ע��˴��ķֺ�

//�������󲢳�ʼ��
int main()
{
	//����ѧ�����󲢳�ʼ��
	struct stu s1 = { "����",20,"20230234" };
	//����ѧ��s1
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
	//�ṹ���������Ա��s1
	//s1�е�ַ
	struct stu* ps = &s1;
	//�ṹ��ָ�������->
	printf("%s\n", ps->name);
	printf("%s\n", (*ps).name);



}