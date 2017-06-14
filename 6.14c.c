/*输入一个数赋给变量a，计算~a的值*/
#include <stdio.h>

int main()
{
    unsigned result;
    int a;
    printf("please input a:");
    scanf("%d",&a);
    printf("a=%d",a);
    result=~a;
    printf("\n~=%o\n",result);
    return 0;
}
