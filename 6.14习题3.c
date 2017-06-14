/*任意输入一个数，分别对该数进行“循环左移”和循环右移操作，并将结果输出*/
#include <stdio.h>

left(unsigned value,int l)
{
    unsigned z;
    z=(value>>(32-l))|(value<<l);
    return z;
    
}

right(unsigned value,int r)
{
    unsigned z;
    z=(value<<(32-r))|(value>>r);
    return z;
}

main()
{
    unsigned a;
    int l;
    int r;
    printf("输入一个数:\n");
    scanf("%o",&a);
    
    printf("输入向左位移的位数 (>0):\n");
    scanf("%d",&l);
    printf("向左位移的结果:%o\n",left(a,l));
    
    printf("输入向右位移的位数 (>0):\n");
    scanf("%d",&r);
    printf("向右位移的结果:%o\n",right(a,r));
}
