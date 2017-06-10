#include <stdio.h>

int main()
{
    char str1[30],str2[30];
    printf("输入目的字符串：\n");
    gets(str1);
    printf("输入源字符串：\n");
    gets(str2);
    
    printf("输出目的字符串：\n");
    puts(str1);
    printf("输出源字符串：\n");
    puts(str2);
    printf("调用strcpy函数进行字符串赋值：\n");
    printf("复制字符串之后的目的字符串：\n");
    puts(str1);
    
    return 0;
}
