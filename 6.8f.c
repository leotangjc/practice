/*使用else if编写屏幕菜单程序*/
#include <stdio.h>

int main()
{
    int iSelection;
    
    printf("---Menu---\n");
    printf("1=load\n");
    printf("2=Save\n");
    printf("3=Open\n");
    printf("other=Quit\n");
    
    printf("enter selection\n");
    scanf("%d",&iSelection);
    
    if(iSelection==1)
    {
        printf("Prosessing Load");
    }
    else if(iSelection==2)
    {
        printf("Processing Save\n");
    }
    else if(iSelection==3)
    {
        printf("Processing Open\n");
    }
    else
    {
        printf("Prosessing Quit\n");
    }
    return 0;
}
