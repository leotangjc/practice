/*使用for循环，打印出大写字母的ASCII对照表*/
#include <stdio.h>

int main()
{
    int a;
    
    for(a=65;a<=90;a++)
    {
        printf("%c,%d\n",a,a);
    }
    return 0;
}
