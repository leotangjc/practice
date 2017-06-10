/*不适用C语言标准函数库中的函数实现字符串的复制，即实现strcpy函数的功能*/
#include <stdio.h>

int main()
{
    char a[30],b[30];
    printf("输入目的字符串：\n");
    gets(a);
    printf("输入源字符串：\n");
    gets(b);
    
    printf("输出目的字符串：\n");
    puts(a);
    printf("输出源字符串：\n");
    puts(b);
    strcpy(a,b);
    printf("调用strcpy函数进行字符串赋值：\n");
    printf("复制字符串之后的目的字符串：\n");
    puts(a);
    
    return 0;
}
