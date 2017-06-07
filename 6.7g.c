#include <stdio.h>

int main()
{
    int iChinese,iEnglish;
    printf("Enter Chinese score");
    scanf("%d",&iChinese);
    printf("Enter English score:");
    scanf("%d",&iEnglish);
    
    if(iChinese>iEnglish)
    {
        printf("Chinese is better than English\n");
    }
    if(iChinese<iEnglish)
    {
        printf("English is better then Chinese\n");
    }
    if(iChinese==iEnglish)
    {
        printf("Chinese equal Englesh\n");
    }
//    return 0
}
