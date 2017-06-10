/*字符串大小写转化*/
#include <stdio.h>
#include <string.h>

int main()
{
    char text[20],change[20];
    int num;
    int i=0;
    
    while(1)
    {
        
        printf("输入转化大小写方式（1表示大写, 2表示大写, 0表示退出):\n");
        scanf("%d",&num);
        if(num==1)
        {
            printf("输入一个字符串：\n");
            scanf("%s",&text);
            strcpy(change,text);
            strupr(change);
            printf("转换成大写字母的字符串为：%s\n",change);
        }
        else if(num==2)
        {
            printf("输入一个字符串：\n");
            scanf("%s",&text);
            strlwr(change);
            printf("转换成小写字母的字符串为：\n",change);
        }
        else if(num==0)
        {
            break;
        }
    }
    return 0;
}
