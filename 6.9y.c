/*字符串的加密和解密*/
#include <stdio.h>

int main()
{
    int result=1;
    int i;
    int count=0;
    char Text[128]={'\0'};
    char cryptograph[128]={'\o'};
    while(1)
    {
        if(result==1)
        {
            printf("请输入要加密的密文：\n");
            scanf("%s",&Text);
            count=strlen(Text);
            for(i=0;i<count;i++)
            {
                cryptograph[i]=Text[i]+i+5;
            }
            cryptograph[i]='\0';
            /*输入密文信息*/
            printf("加密后的密文是:%s\n",cryptograph);
        }
        else if(result==2)
        {
            count=strlen(Text);
            for(i=0;i<count;i++)
            {
                Text[i]=cryptograph[i]-i-5;
            }
            Text[i]='\0';
            /*输出明文信息*/
            printf("解密后的明文是：\n",Text);
        }
        else if(result==3)
        {
            break;
        }
        else
        {
            printf("请输入正确命令符：\n");
        }
        
        /*输出字符串*/
        printf("输入1加密新的密文,输入2对刚加密的密文进行解密，输入3退出系统：\n");
        printf("请输入命令符：\n");
        scanf("%d",&result);
    }
    return 0;
}
