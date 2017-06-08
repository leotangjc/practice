/*输入三个整数，输出其中最大的值*/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("请输入a，b，c值：\n");
    scanf("%d%d%d",&a,&b,&c);
    
    if(a>b,a>c)
    {
        printf("最大值是a\n");
        
    }
    else if(b>a,b>c)
    {
        printf("最大值是b\n");
        
    }
    else if(c>a,c>b)
    {
        printf("最大值是c\n");
        
    }
    
    return 0;
}
