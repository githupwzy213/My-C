#include<stdio.h>
#include<string.h>

//strstr:查找子字符串
//const char * strstr ( const char * str1, const char * str2 );
//返回NULL或子窜地址
//NULL--空指针。NUL/Null-'\0'
char* my_strstr(char* p1,char* p2)
{
	char* s1 = p1;//用s1作为子窜地址返回
	char* s2 = p2;
	int i = 0;
	int j = 0;
	int len1 = (int)strlen(p1);
	int len2 = (int)strlen(p2);
	if (len2 == 0)
		return s1;//如果p2是空字符串则返回s1(这条语句可有可无，当len2=0时j>=len2同样返回s1)
	for (i=0;i<=len1-len2;i++)//子窜地址只可能是前len1-len2个元素中的的一个地址。剩余元素长度必须大于等于子窜长度
	{
		for (j = 0; j < len2; j++)
		{
			if (*(s2 + j) != *(s1 + j))
				break;
		}
		if (j >= len2)
		{
			return s1;
		}
		s1++;//子窜地址遍历p1中的前len1-len2个元素地址

	}
	if (i > len1 - len2)
		return NULL;
}
int main()
{
	char* p1 = "abcdefabbdeef";
	char* p2 = "abb";
	char* ret = strstr(p1, p2);//在p1中找p2
	char* ret2 = my_strstr(p1, p2);
	//第一次出现的地址
	if (ret2 == NULL)
		printf("子窜不存在");
	else
		printf("%s", ret2);//打印def
	return 0;
}