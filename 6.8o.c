/*使用while为用户提供菜单显示*/
#include <stdio.h>

int main()
{
    int iSelect=1;
    
    while(iSelect!=0)
    {
        printf("--------Menu--------\n");
        printf("----Sell------------1\n");
        printf("----Buy-------------2\n");
        printf("----ShowProduct-----3\n");
        printf("----Out-------------0\n");
        
        scanf("%d",&iSelect);
        switch(iSelect)
        {
            case 1:
                printf("you are buying something into store");
                break;
            case 2:
                printf("you are selling to consumer\n");
                break;
            case 3:
                printf("checking the store\n");
                break;
            case 0:
                printf("the Prongram is out\n");
                break;
            default:
                printf("You put a wrong selection\n");
                break;
                
        }
    }
    return 0;
}
