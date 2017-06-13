/*输入两个字符串，将这两个字符串连接后输出*/
#include<stdio.h>
#include<stdlib.h>

char * jh(char * s,char * t);

int main()
{
    char string_1[100];
    char string_2[100];
    
    char *result;
    
    printf("please input string 1:\n");
    scanf("%s",string_1);
    printf("\nplease input string 2:\n");
    scanf("%s",string_2);
    
    result=jh(string_1,string_2);
    printf("\nthe result is %s\n",result);
    
    return 0;
}

char * jh(char * s,char * t)
{
    char * head=s;
    
    printf("\nstring 1 is:\n");
    for(;*s!='\0';s++)
    {
        printf("%c",*s);
    }
    printf("\n");
    for(;*t!='\0';t++)
    {
        *s=*t;
        s++;
    }
    *s='\0';
    
    s=head;
    
    return s;
}
