#include <stdio.h>

int main()
{
    int i;
    char String[7]={"mrsoft"};
    char Reversr[7]={0};
    int size;
    size=sizeof(String);
    
/*循环读取字符*/
    for(i=0;i<6;i++)
    {
        Reversr[size-i-2]=String[i];
    }
    
/*输出源字符串*/
    printf("输出源字符串：%s\n",String);
/*输出目标字符串*/
    printf("输出目标字符串：%s\n",Reversr);
    return 0;
}
