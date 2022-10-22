#include<stdio.h>
#include<string.h>
#include<assert.h>
//实现函数：可以左旋字符窜中的k个字符。如ABCD左旋两个字符得到CDAB.ABCDEF-CDEFAB
//前两个逆序BACDEF后半部分逆序BAFEDC全部逆序CDEFAB
//void reverse(char arr[], int left, int right)
//{
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//暴力求解：将后面每个元素前移k个下标，前k个元素依次放到末尾
//void left_move(char*str, int k)
//{
//	//指针解引用之前判断是否为NULL
//	assert(str);//如果str为NULL则报错
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{//每次循环将一个元素放到末尾后面元素前移
//		int j = 0;
//		char temp = *str;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//
//		}
//		*(str + len - 1) = temp;
//
//	}
//
//}
//int main()
//{
//	char arr[] = "ABCDEFGHI";
//	int k = 4;
	////方法1：三步翻转(可以封装到一个函数内放到主函数外）
	//int len = strlen(arr);//'\0'不能参与逆序否则字符窜元素将会发生改变。
	////前k个逆序
	//reverse(arr, 0, k - 1);
	////后sz-k个逆序
	//reverse(arr, k, len - 1);
	////逆序整个数组
	//reverse(arr, 0, len - 1);
	////方法2：
	//left_move(arr, k);
	//printf("%s",arr);
	//return 0;
//}
//写一个函数，判断一个字符是否为另一个字符串旋转之后的字符窜。
//给定：s1=AABCD和s2=BCDAA,返回1.给定s1=abcd和s2=ABCD返回0
//AABCD左旋1个字符得ABCDA.AABCD左旋两个得BCDAA.AABCD右旋一个得DAABC
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)//如果没有这个判断则当ABCDEF和AB也会被判断成YES
		return 0;
	//1.在str1字符串中追加一个str1字符窜
	// string.h：strcat(arr1,arr2)(string catenate字符窜连接)将字符窜arr2追加到arr1当中。
	// char * strcat ( char * destination, const char * source );
	// arr1[]="ab",arr2[]="cd",将arr2中的每个元素依次放到arr1中的'\0'位置，知到将arr2中的'\0'放入arr1中结束
	// strcat不适用追加本身。若strcat（arr1，arr1）则将arr1中的a,b依次放到'\0'位置，当要放'\0'时，'\0'已经被a占用了，这样会一直死循环。
	// strnct:char * strncat ( char * destination, const char * source, size_t num );size_t num要追加的字符数。可以追加本身。
	strncat(str1, str2, len1);
	//2.判断str2指向的字符窜是否为str1指向的字符窜的子窜
	//strstr(str1,str2);判断str1是否有子窜str2(找到了返回子窜的地址，找不到返回空指针)
	char*ret= strstr(str1, str2);
	if (ret == NULL)//NULL在stdio.h中
		return 0;
	else
		return 1;

}
int main()
{
	char arr1[30] = "ABCDEF";//由于优化方案要追加元素所以要初始化一个较大空间
	char arr2[] = "DEFA";
	int len = strlen(arr1);
	//方法1：
	//将arr1所有旋转后的结果与arr2比较如果相同则返回1
	//ABCDEF,BCDEFA,CDEFAB,DEFABC,EFABCD,FABCDE
	//int i = 0;
	//for (i = 0; i < len - 1; i++)
	//{
	//	reverse(arr1, 0, i - 1);
	//	reverse(arr1, i, len - 1);
	//	reverse(arr1, 0, len - 1);
	//	if (strcmp(arr1, arr2) == 0)//两数组相同（参数是指针类型）
	//	{
	//		printf("YES\n");
	//		break;
	//	}
	//}
	//if (i >= len - 1)
	//	printf("NO\n");

    //优化：arr3[]="ABCDEFABCDEF"则arr1所有旋转可能都是arr3的子窜
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	return 0;
}

////判断代码运行结果
	//int a[5] = { 5,4,3,2,1 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));//打印4,1

	//模拟使用qsort

	//int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
	//int* ptr1 = (int*)(&aa + 1);//ptr1（int*)指向数组最后一个元素后面的地址
	//int* ptr2 = (int*)(*(aa + 1));//ptr2(int*)指向5的地址
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//打印1,6