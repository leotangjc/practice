/*任意输入一个数，分别求该数“左移”和右移运算操作后的结果*/
#include <stdio.h>

int main()
{
    int a;
    printf("请输入一个数：");
    scanf("%d",&a);
    {
    a=a<<1;
    printf("左移后为：%d\n",a);
    }
    {
    a=a>>1;
    printf("右移后为：%d\n",a);
    }

}
