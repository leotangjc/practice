/*计算字符串中有多少个单词*/
#include <stdio.h>

int main()
{
    char cString[100];
    int ilndex,iWord=1;
    char cBlank;
    gets(cString);
    
    if(cString[0]=='\0')
    {
        printf("There is no char\n");
    }
    else if(cString[0]==' ')
    {
        printf("First char just is a blank!\n");
    }
    else
    {
        for(ilndex=0;cString[ilndex]!='\0';ilndex++)
        {
            cBlank=cString[ilndex];
            if(cBlank==' ')
            {
                iWord++;
            }
            printf("%d\n",iWord);
    }
    return 0;

}
