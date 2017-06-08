/*利用选择结构设计一个程序，使其能计算函数*/
/*y=x   (x<1)*/
/*y=2x-1    (1<=x<10)*/
/*y=3x-11   (x>=10)*/
/*输入X时，计算显示Y值*/
#include <stdio.h>

int main()
{
    int x,y;
    
    printf("请输入x值：\n");
    scanf("%d",&x);
    
    if(x<1)
    {
        y=x;
        printf("Y值等于：%d\n",y);
    }
    else if(1<=x<10)
    {
        y=2*x-1;
        printf("Y值等于：%d\n",y);
    }
    else if(x>=10)
    {
        y=3*x-11;
        printf("Y值等于：%d\n",y);
    }
    return 0;
}
