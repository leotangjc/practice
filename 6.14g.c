/*编程实现循环左移，具体要求如下：受限从键盘中输入一个八进制数，然后输入要唯一的位数，最后将唯一的结果显示在屏幕上*/
#include <stdio.h>

left(unsigned value,int n)
{
    unsigned z;
    z=(value>>(32-n))|(value<<n);
    return z;
    
}
main()
{
    unsigned a;
    int n;
    printf("please input a number:\n");
    scanf("%o",&a);
    printf("please input the number of displacement (>0):\n");
    scanf("%d",&n);
    printf("the result is %o:\n",left(a,n));
}
