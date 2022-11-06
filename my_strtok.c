#include<stdio.h>
#include <string.h>

//strtok
//char* strtok(char* str, const char* delimiters);
//  const char* delimiters：分隔符字符集合
// char* str被切割的字符串
//通过分隔符符将字符串分割开：在str中找到下一个标记并将其用为'\0'结尾然后返回一个指向这个标记的指针
//strtok会改变字符窜，所以strtok切割的字符串一般是一个临时拷贝的字符串
//函数第一个参数不为NULL，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置
//第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL

int main()
{
    char arr[] = "abcd@ef!gh";
    char* p = "@!";
    char cpy[100] = "0";
    strcpy(cpy, arr);
   // char* ret = strtok(cpy, p);//第一次参数不能为NULL,找到第一个标记并记住这个标记。
   // printf("%s\n", ret);
   // ret = strtok(NULL, p);//第二次参数为NULL，从上次保存的标识符位置开始查找下一个标记
   // printf("%s\n", ret);
   // ret = strtok(NULL, p);
   // printf("%s\n", ret);
   ////打印abcd  ef  gh
//上述打印语句可以替换为循环语句
    char* ret = NULL;
    for (ret = strtok(cpy, p); ret != NULL; ret = strtok(NULL, p))
    {//
        printf("%s\n", ret);
        ////打印abcd  ef  gh
    }
    return 0;
}