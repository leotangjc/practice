/*任意输入两个数分别付给a和b，计算a|b的值*/
#include <stdio.h>

int main()
{
    unsigned result;
    int a,b;
    printf("please input a:");
    scanf("%d",&a);
    printf("please input b:");
    scanf("%d",&b);
    printf("a=%d,b=%d",a,b);
    result=a|b;
    printf("\na|b=%u\n",result);

}
