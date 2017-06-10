#include <stdio.h>

int main()
{
    char text[50],connect[50];
    int num;
    
    printf("输入一个字符串:\n");
    scanf("%s",&text);
    num=strlen(text);
    printf("字符串的长度为：\n",num);
    printf("再输入一个字符串：\n");
    scanf("%s",&connect);
    num=strlen(connect);
    printf("字符串的长度为：%d",num);
    strcat(text,connect);
    printf("将两个字符串进行连接:\n",text);
    num=strlen(text);
    printf("连接后的字符串长度为：\n",num);
    
    return 0;
}
