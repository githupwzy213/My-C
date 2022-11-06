#include<stdio.h>
#include<assert.h>
#include<string.h>
//strcmp:int strcmp ( const char * str1, const char * str2 );
//int main()
//{
//	//比较两个字符窜
//	char* p1 = "zb";
//	char* p2 = "zbf";
//	int ret = strcmp(p1, p2);
//	//一对一对比较,只要有一对是不想等则返回值。
//	//字符串p1<p2则返回小于零的数，相等则返回0，p1>p2则大于零
//	printf("%d", ret);
//	return 0;
//}
 

//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1 && str2);//断言，str1和str2不能为NULL
//	while (*str1 == *str2)
//	{
//		//判断相等情况
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	/*if (*str1 < *str2)
//		return -1;
//	else
//		return 1;*/
//	return *str1 - *str2;//直接返回字符ASCLL码值差值
//}
//int main()
//{
//	char* p1 = "abf";
//	char* p2 = "cbf";
//	int ret = my_strcmp(p1, p2);
//	printf("%d", ret);
//	return 0;
//}

//int strncmp ( const char * str1, const char * str2, size_t num );
//比较字符串的前size_t num 个字符
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "adjk";
//	int ret = strncmp(arr1, arr2, 2);//-1
//	printf("%d", ret);
//	return 0;
//}

//字符串长度限制的字符串函数
//strncpy:char * strncpy ( char * destination, const char * source, size_t num );
//限制拷贝字符个数
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[10] = "hijk";
//	strncpy(arr1, arr2, 2);//hicdefg
//	strncpy(arr1, arr2, 6);//hijk，源字符窜不足全部补0
//	printf("%s", arr1);
//	return 0;
//}

//strncat:char * strncat ( char * destination, const char * source, size_t num );
//int main()
//{
//	char arr1[10] = "abcdefg";
//	char arr2[30] = "hijk\0xxxxxxxxxxxxx";
//	char* str = strncat(arr2, arr1, 2);//hijkab
//	//追加两个字符后自动再追加一个\0
//	//如果追加个数超过源字符串长度也只是追加源字符窜中的字符然后再追加一个\0
//	printf("%s", str);
//	return 0;
//}