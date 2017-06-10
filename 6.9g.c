/*使用两种方式输出字符串*/
#include <stdio.h>

int main()
{
    int ilndex;
    char cArray[12]="MingRi KeJi";
    
    for(ilndex=0;ilndex<12;ilndex++)
    {
        printf("%c",cArray[ilndex]);
    }
    printf("\n%s",cArray);
    return 0;
}
