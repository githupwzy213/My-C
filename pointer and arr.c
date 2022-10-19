#include<stdio.h>
//指针和数组笔试sizeof/strlen
//int main()
//{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16数组大小/16/整形数组4个元素每个元素4字节共16字节
	//printf("%d\n", sizeof(a+0));//4或8/a是首元素地址/+0/后还是地址（32位返回4）
	//printf("%d\n", sizeof(*a));//4/a是首元素地址，*a解引用得到首元素，首元素是整形大小4个字节
	//printf("%d\n", sizeof(a+1));//4或8。和a+0情况相同
	//printf("%d\n", sizeof(a[1]));//4.第二个元素大小
	//printf("%d\n", sizeof(&a));//4或8.&a取得数组地址（也是地址）地址大小是4或8
	//printf("%d\n", sizeof(*&a));//16.&a是数组地址，解引用后访问整个数组，*和&相当于抵消了。
	//printf("%d\n", sizeof(&a+1));//4或8.&a数组地址，+1跳过整个数组，还是地址
	//printf("%d\n", sizeof(&a[0]));//4或8，第一个元素地址
	//printf("%d\n", sizeof(&a[0]+1));//4或8。第二个元素地址
	
	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));//6.数组大小6个元素，6*1字节
	//printf("%d\n", sizeof(arr+0));//4或8。地址大小都是4或8字节。
	//printf("%d\n", sizeof(*arr));//1.首元素大小（字符1字节）
	//printf("%d\n", sizeof(arr[1]));//1第二个元素大小
	//printf("%d\n", sizeof(&arr));//4或8，数组地址
	//printf("%d\n", sizeof(&arr+1));//4或8，数组地址跳整个数组大小
	//printf("%d\n", sizeof(&arr[0]+1));//4或8，第二个元素地址
	////strlen要的是地址（从当前地址寻找字符直到找到\0结束，共有多少个字符）
	//printf("%d\n", strlen(arr));//随机数（数组内没有\0)
	//printf("%d\n", strlen(arr+0));//随机值（和上一个一样）
	//printf("%d\n", strlen(*arr));//err。将第一个元素a的ASCLL97当作地址向后访问（地址97非法）
	//printf("%d\n", strlen(arr[1]));//err。将第二个元素的ASCLL当作地址
	//printf("%d\n", strlen(&arr));//随机值。从数组地址开始访问（和arr/arr+0相同）
	//printf("%d\n", strlen(&arr+1));//随机值。和上面arr的一个随机值差6.
	//printf("%d\n", strlen(&arr[0]+1));//随机值（和arr差1）
	
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7.数组有七个元素，sizeof是整个数组空间大小
	//printf("%d\n", sizeof(arr+0));//4或8。首元素地址大小都是4或8字节。
	//printf("%d\n", sizeof(*arr));//1.首元素大小（字符1字节）
	//printf("%d\n", sizeof(arr[1]));//1第二个元素大小
	//printf("%d\n", sizeof(&arr));//4或8，数组地址
	//printf("%d\n", sizeof(&arr+1));//4或8，数组地址跳整个数组大小
	//printf("%d\n", sizeof(&arr[0]+1));//4或8，第二个元素地址
	//
	//printf("%d\n", strlen(arr));//6遇到\0停止（\0)不计入
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err。将第一个元素a的ascll97当作地址向后访问（地址97非法）
	//printf("%d\n", strlen(arr[1]));//err。将第二个元素的ascll当作地址
	//printf("%d\n", strlen(&arr));//6。从数组地址开始访问（和arr/arr+0相同）
	//printf("%d\n", strlen(&arr+1));//随机值，跳过数组内容在后面查找字符.
	//printf("%d\n", strlen(&arr[0]+1));//5，从第二个元素开始
	
	//char* p = "abcder";//常量字符串，p中放的是a的地址
	//printf("%d\n", sizeof(p));//4或8.计算指针变量p大小
	//printf("%d\n", sizeof(p+1));//4或8。P+1还是指针。找到的是字符b的地址
	//printf("%d\n", sizeof(*p));//1。*p就是‘a’
	//printf("%d\n", sizeof(p[0]));//p[0]==*（p+0）是字符a。p[1]='b'
	//printf("%d\n", sizeof(&p));//4或8
	//printf("%d\n", sizeof(&p+1));//4或8
	//printf("%d\n", sizeof(&p[0]+1));//4或8，'b'的地址

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p+1));//5,p+1是'b'的地址
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//随机值，p是a的地址，&p是a地址的地址，它是个随机地址，后面的地址内容随机
	//printf("%d\n", strlen(&p+1));//随机值
	//printf("%d\n", strlen(&p[0]+1));//5
	
	//二维数组：看成一维数组，每一行是一个元素每个元素是一维数组,a[0]第一行数组名
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//48。数组总大小12*4=48字节
	//printf("%d\n", sizeof(a[0][0]));//4.第一个整形元素大小
	//printf("%d\n", sizeof(a[0]));//16.第一行一维数组的数组名（a[0]单独放在括号里是第一行数组名）
	//printf("%d\n", sizeof(a[0]+1));//4。a[0]在这里是首元素地址，第一行第一个元素地址，a[0]+1是第一行第二个元素地址
	//printf("%d\n", sizeof(*(a[0]+1));//4.第一行第二个元素
	//printf("%d\n", sizeof(a+1));//4.a是首元素地址，a+1是第二行数组的地址
	//printf("%d\n", sizeof(*(a+1));//16第二行数组解引用第二行数组，等价于a[1]
	//printf("%d\n", sizeof(&a[0]+1));//4或8第二行数组地址
	//printf("%d\n", sizeof(*(&a[0]+1));//16,第二行数组
	//printf("%d\n", sizeof(*a));//16，a是第一行数组地址*a第一行数组
	//printf("%d\n", sizeof(a[3]));//16，a[3]是第四行数组，实际上它不去访问，所以只是计算这个数组大小。
	
	

	
//}


//指针笔试题
	//int a[5] = { 1,2,3,4,5 };
	//int* ptr = (int*)(&a + 1);//数组指针强制转换为整型
	//printf("%d,%d", *(a + 1), *(ptr - 1));//打印2,5
	//	*(a+1)是第二个元素，ptr是数组后面一个地址，ptr-1是数组元素5的地址

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa;
}*p;//p是结构体指针变量
//假设p的值为0x100000，如下表达式的值分别是多少
//已知结构体Test类型的变量大小是20个字节
int main()
{
	p = (struct Test*)0x100000;
	printf("%p\n",p+0x1);//0x1是16进制的1就是1，p+1跳过（结构体指针大小）20个字节。20就是0x14打印00100014
	//但是系统默认p是10字节打印	00100010
	printf("%p\n", (unsigned long)p + 0x1);//先转换成整型，十进制+1后再转换成16紧张，整型+1就是加一
	//打印00100001
	printf("%p\n", (unsigned int*)p + 0x1);//无符号整型是4字节
	//00100004

	
}
